#include<iostream>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;

class Student{
public:
	int nNo;
	char *szName;
	Student(){

		cout << "�⺻ ������" << endl;
		nNo = 0;
		szName = 0;
	}
	Student(int no, char *name){
		cout << "�Ű������� �ִ� ������" << endl;
		nNo = no;
		szName = new char[strlen(name) + 1];
		strcpy(szName, name);
	}
	~Student(){
		if (szName != NULL){
			cout << szName;
			cout << "�Ҹ���" << endl;
			delete[] szName;
		}
		else{
			cout << "�̸��� �����ϴ�" << endl;
		}
	}
	void PrintStudent(){
		if (szName != NULL)
			cout << "��ȣ : " << nNo << "�̸� : " << szName << endl;
		else
			cout << "��ȣ : " << nNo << endl;

	}
	Student& copy(Student &ori){ //call by reference 
		
		if (this != &ori){
			this->nNo = ori.nNo;
			if (this->szName != NULL){
				delete[] szName;
			}
			this->szName = new char[strlen(ori.szName)+1];
			strcpy(this->szName, ori.szName);
		}
		
	
		cout << "###########################################" << endl;
		return *this;
	}
	Student& operator=(Student &ori){ //call by reference
		cout << "�Ҵ� ������ ȣ�� " << endl;
		copy(ori);
		return *this; //Student�� Ÿ���� �����ֱ� ���ؼ�
	
	}

	Student(Student &st){
		if (this != &st){
			this->nNo = 0;
			this->szName = new char[strlen(st.szName) + 1];
			strcpy(this->szName, st.szName);
		}
		else{
			/*this->nNo = 0;
			this->szName = 0;*/
			Student();
		}
	}


};	
void a(){
		Student a(1, "������");
		a.PrintStudent();

		Student b;
		Student c;

		b.PrintStudent();
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

		//b = a;
		//b.copy(a);
		b.operator=(a);

		a = a;
		a.PrintStudent();	
		
		c = b = a; //�Ҵ� �����ڴ� �����ʺ���
		b = c;
		b.PrintStudent();
		c.PrintStudent();
	
		b.PrintStudent();
		strcpy(b.szName, "�����");
		b.PrintStudent();
		
		
		cout <<endl<< "===============================================" << endl;

		Student d = b;
		d.PrintStudent();
		b.PrintStudent();

		cout << "===========================================" << endl;
		Student e = e;
		e.PrintStudent();
		

	}
int main()
{
	a();
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;



	return 0;
}