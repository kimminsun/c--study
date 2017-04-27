//c++���� ���� ���� ����ϴ� ����!

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h> //strcpy()
using namespace std;

class Student{
//public: //�̰� �Ⱦ��� �⺻�� private
	//��� �ѹ� ���ָ� ���� �� ���� ������ �� public...........

	char szName[10]; //�̸�
	short nNo; //��ȣ
	double a;

public:
	void SetStudent(int nNo, char* pName);
	void PrintStudent();

	Student(){
		nNo = 0;
		szName[0] = 0;
		cout << "�⺻ ������" << endl;
	}
	Student(int nNo, char* pName){
		cout << "�Ű����� 2�� ������" << endl;
		this->nNo = nNo; 
		strcpy(szName, pName);
	}
	~Student(){
		cout << nNo<<"�Ҹ���" << endl;
	}
};

struct StudentExtend : public Student{ //�ִ� ���� ���� �ڹٴ� �ȵ� (protected �� �ȵ� �ڱ� �Ƶ��ʿ����� ���ϱ�)
	int nKor;
	int nEng;
	int nMat; 

	StudentExtend(){
		cout << "�Ƶ������" << endl;
	}
};

void Student::SetStudent(int nNo, char* pName){
	//nNo = nNo;
	//�̸��� ������ �Ű�������(����� ��) �ν��ؼ� �Ű������� �Ű����� ���� ��
	//�׷��ϱ� ������ ���� ������
	this->nNo = nNo; //�ڹٿ� �ٸ��� -> �� ������ �����Ϸ��� �Ʊ� *pThis ��ſ� *this�� �޾���
	//���� *this�� ������ ������ ������ ���ϱ� ���⸸ �ض�
	strcpy(szName, pName);
}
void Student::PrintStudent(){
	cout << "��ȣ : " << nNo << ", �̸� : " << szName << endl;
}

int main(){
	int no;
	char name[20];
	Student student; //�⺻������ ȣ���ϴ� ���	
	Student *st3 = new Student(3, "������");
	StudentExtend se;
	Student st1(5, "��");
	Student *st2 = new Student(); //�������� �����ϴ� ��
	cout<<sizeof(student)<<endl;
	delete st2;
	delete st3;
	
	student.PrintStudent();
	st1.PrintStudent();

	cout << "�л� ��ȣ �Է� : ";
	cin >> no;

	cout << "�л� �̸� �Է� : ";
	cin >> name;

	student.SetStudent(no, name);
	student.PrintStudent();

	
	//se.nNo = 10;
	//cout << se.nNo << endl; //student�� �ٲ� �� �ƴ϶� studentextend�� �ٲ� ��
	//���� ���������� �ٲ㼭 ����

	/*se.SetStudent(20, "������");
	se.PrintStudent(); //�Լ����� ����� �޾Ҵ�*/

	return 0;
}