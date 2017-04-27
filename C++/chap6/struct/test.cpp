#include<iostream>
#include<string.h>
#pragma warning(disable:4996)
using namespace std;
class Student{
public:
	int nNo;
	char *szName;

	Student(){
		nNo = 0;
		szName = NULL;
	}

	Student(int no, char *name){

		nNo = no;
		szName = new char[strlen(name) + 1];
		strcpy(szName, name);
	}

	void PrintStudent(){
		if (szName != 0){
			cout << "��ȣ : " << nNo << "�̸� : " << szName << endl;
		}
		else{
			cout << "��ȣ : " << nNo << endl;
		}
	}

	~Student(){
		if (szName != 0){
			cout << szName << "�Ҹ���" << endl;
			delete[] szName;
		}
	}

	Student& operator=(Student &s){
		if (this != &s){
			this->nNo = s.nNo;
			
			if (this->szName != NULL){
				delete[]szName;
			}
		this->szName = new char[strlen(s.szName) + 1];
		strcpy(this->szName, s.szName);
		}
		return *this;
	}
	Student(Student &s){
		if (this != &s){
			this->nNo = s.nNo;
			this->szName = new char[strlen(s.szName) + 1];
			strcpy(this->szName, s.szName);
		}
		else{
			Student();
		}
	}
};
int main()
{
	Student a(1, "����");
	a.PrintStudent();

	Student b; //�⺻������ �θ� �� ��ȣ x
	b.PrintStudent();

	b = a;
	a.PrintStudent();
	b.PrintStudent();

	Student c;
	c = a = b;

	a.PrintStudent();
	b.PrintStudent();
	c.PrintStudent();

	a = a;

	cout << "==============================" << endl;
	Student d = a;
	a.PrintStudent();
	d.PrintStudent(); 

	Student e = e;


	return 0;
}
