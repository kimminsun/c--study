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

		cout << "기본 생성자" << endl;
		nNo = 0;
		szName = 0;
	}
	Student(int no, char *name){
		cout << "매개변수가 있는 생성자" << endl;
		nNo = no;
		szName = new char[strlen(name) + 1];
		strcpy(szName, name);
	}
	~Student(){
		if (szName != NULL){
			cout << szName;
			cout << "소멸자" << endl;
			delete[] szName;
		}
		else{
			cout << "이름이 없습니다" << endl;
		}
	}
	void PrintStudent(){
		if (szName != NULL)
			cout << "번호 : " << nNo << "이름 : " << szName << endl;
		else
			cout << "번호 : " << nNo << endl;

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
		cout << "할당 연산자 호출 " << endl;
		copy(ori);
		return *this; //Student랑 타입을 맞춰주기 위해서
	
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
		Student a(1, "강아지");
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
		
		c = b = a; //할당 연산자는 오른쪽부터
		b = c;
		b.PrintStudent();
		c.PrintStudent();
	
		b.PrintStudent();
		strcpy(b.szName, "고양이");
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