#include<iostream>
using namespace std;

struct TStudent{
	int nNo;
	char szName[20];

	int nKor;
	int nEng;
	int nMat;

	int nSum;
	double dAvg;
};

int main(){
	TStudent student;

	student.nNo = 1;
	strcpy_s(student.szName, "ȫ�浿");
	student.nKor = 70;
	student.nEng = 80;
	student.nMat = 90;

	student.nSum = student.nKor + student.nEng + student.nMat;
	student.dAvg = student.nSum / (double)3;

	cout << "��ȣ : " << student.nNo << endl;
	cout << "�̸� : " << student.szName << endl;
	cout << "���� : " << student.nKor << endl;
	cout << "���� : " << student.nEng << endl;
	cout << "���� : " << student.nMat << endl;
	cout << "���� : " << student.nSum << endl;
	cout << "��� : " << student.dAvg << endl;

	cout << sizeof(student) << endl;
	//cout << student << endl; //cout�� ���� �Լ��� ���� �Ǿ����� �ʱ� ������ ����
	cout << &student << endl; //�ּ� ���

	TStudent *p = &student; //4����Ʈ

	cout << student.nNo << endl;
	cout << (*p).nNo << endl;
	cout << p->nNo << endl; //(*). �� �� ->

	cout << p << endl; //���� &student�� ����

	TStudent *p1 = new TStudent; //new �����ָ� �ʱ�ȭ �ش޶��
	p1->nNo = 5;

	TStudent sta[10]; //�迭�� �ϳ��ε� 2���� ����, ���α׷��� �� ��������
	cout << sizeof(sta) << endl; //48�� 10��

	TStudent *p2 = &sta[0];
	//TStudent *p2 = sta; //[0]�� *�� ����ϹǷ� &�� ���Ǿ� ����.

	cout << p2 << endl;
	p2++; //+1�� ������ ������ ��ŭ �̵��̴�
	cout << p2 << endl; //48, 0x30��ŭ �̵�

	return 0;
}