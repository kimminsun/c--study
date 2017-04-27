 //c++���� ���� ���� ����ϴ� ����!

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h> //strcpy()
using namespace std;
static int getnCnt();

class Student{
private:
	//public: //�̰� �Ⱦ��� �⺻�� private
	//��� �ѹ� ���ָ� ���� �� ���� ������ �� public...........
	int nNo; //��ȣ
	char *szName; //�̸�
	static int nCnt;
public:
	void SetStudent(int nNo, char* pName);
	void PrintStudent();

	Student(){
		nNo = 0;
		szName = 0; //�ּҺκп�  0
		
		nCnt++;
		cout << nCnt << endl;
		cout << "�⺻ ������" << endl;
	}
	Student(int nNo, char* pName){
		
		nCnt++;
		cout << nCnt << endl;
		cout << "�Ű����� 2�� ������" << endl;	
		szName = new char[strlen(pName) + 1];
		this->nNo = nNo;
		strcpy(szName, pName);
	}
	~Student(){
		nCnt--;
		cout << nCnt << "�Ҹ���" << endl;
		delete[] szName;
	}
	static int getnCnt(){
		return nCnt;
	}
};

/*struct StudentExtend : public Student{ //�ִ� ���� ���� �ڹٴ� �ȵ� (protected �� �ȵ� �ڱ� �Ƶ��ʿ����� ���ϱ�)
	int nKor;
	int nEng;
	int nMat;

	StudentExtend(){
		cout << "�Ƶ������" << endl;
	}
};*/
int getnCnt(); 
void Student::SetStudent(int nNo, char* pName){
	szName = new char[strlen(pName)+1];
	//nNo = nNo;
	//�̸��� ������ �Ű�������(����� ��) �ν��ؼ� �Ű������� �Ű����� ���� ��
	//�׷��ϱ� ������ ���� ������
	this->nNo = nNo; //�ڹٿ� �ٸ��� -> �� ������ �����Ϸ��� �Ʊ� *pThis ��ſ� *this�� �޾���
	//���� *this�� ������ ������ ������ ���ϱ� ���⸸ �ض�
	strcpy(szName, pName);
}
void Student::PrintStudent(){
	if (szName != 0){
		cout << "��ȣ : " << nNo << ", �̸� : " << szName << endl;
	}
	else
		cout << "��ȣ : " << nNo << "  �̸�����" << endl;
}
int main(){

	int no;
	char name[20];
	Student student; //�⺻������ ȣ���ϴ� ���	
	Student *st3 = new Student(3, "������");
	//StudentExtend se;
	Student st1(5, "��");
	Student *st2 = new Student(); //�������� �����ϴ� ��
	cout << st3->getnCnt() << endl;	
	cout << sizeof(st1) << endl;
	cout << sizeof(Student) << endl;

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