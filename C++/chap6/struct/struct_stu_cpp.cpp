#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h> //strcpy()
using namespace std;

struct Student{
	int nNo; //��ȣ
	char szName[20]; //�̸�

	void SetStudent(int nNo, char* pName){
		//nNo = nNo;
		//�̸��� ������ �Ű�������(����� ��) �ν��ؼ� �Ű������� �Ű����� ���� ��
		//�׷��ϱ� ������ ���� ������
		this->nNo = nNo; //�ڹٿ� �ٸ��� -> �� ������ �����Ϸ��� �Ʊ� *pThis ��ſ� *this�� �޾���
		//���� *this�� ������ ������ ������ ���ϱ� ���⸸ �ض�
		strcpy(szName, pName);
	}

	void PrintStudent(){
		cout << "��ȣ : " << nNo << ", �̸� : " << szName << endl;
	}
};

int main(){
	int no;
	char name[20];
	Student student;

	cout << "�л� ��ȣ �Է� : ";
	cin >> no;

	cout << "�л� �̸� �Է� : ";
	cin >> name;

	student.SetStudent(no, name);
	student.PrintStudent();

	return 0;
}