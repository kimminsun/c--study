#include<iostream>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;

class Student{
public:
	int nNo;
	char szName[20];
	Student(){

		cout << "�⺻ ������" << endl;
		nNo = 0;
		szName[0] = 0;
	}
	Student(int no, char *name){
		cout << "�Ű������� �ִ� ������" << endl;
		nNo = no;
		strcpy(szName, name);
	}
	~Student(){
		cout << nNo;
		cout << "�Ҹ���" << endl;
	}
	void PrintStudent(){
		cout << "��ȣ : "<<nNo << "�̸� : " << szName << endl;
	}
};
int main(){
	Student st[10];
	st[0].nNo = 1;
	strcpy(st[0].szName, "������");
	st[0].PrintStudent();

	st[1].nNo = 2;
	strcpy(st[1].szName, "������");
	st[1].PrintStudent();

	Student* ast = new Student[10];

	ast[0].nNo = 3;
	strcpy(ast[0].szName, "�۾���");
	ast[0].PrintStudent();

	(ast+1)->nNo = 4;
	strcpy(ast[1].szName, "���Ƹ�");
	ast[1].PrintStudent();

	ast->PrintStudent();
	(ast + 2)->nNo = 5;
	strcpy((ast + 2)->szName, "�����");
	(ast + 2)->PrintStudent();
	
	st->PrintStudent();

	cout << &st[0] << endl;
	cout << &st[1] << endl;

	cout << &ast[0] << endl;
	cout << &ast[1] << endl;

	(st + 1)->PrintStudent();
	
	//ast++;
	//ast->PrintStudent();
	delete []ast;
	return 0;
}
