#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h> //strcpy()
using namespace std;

struct Student{
	int nNo; //��ȣ
	char szName[20]; //�̸�
};

void SetStudent(Student* pThis, int no, char* pName){
	pThis->nNo = no;
	strcpy(pThis->szName, pName);
}

void PrintStudent(Student* pThis){
	cout << "��ȣ : " << pThis->nNo << ", �̸� : " << pThis->szName << endl;
}

int main(){
	int no;
	char name[20];
	Student student;

	cout << "�л� ��ȣ �Է� : ";
	cin >> no;

	cout << "�л� �̸� �Է� : ";
	cin >> name;

	SetStudent(&student, no, name);
	PrintStudent(&student);

	return 0;
}