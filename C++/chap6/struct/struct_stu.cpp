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
	cout << "�̸� : " << student.szName<< endl;
	cout << "���� : " << student.nKor << endl;
	cout << "���� : " << student.nEng << endl;
	cout << "���� : " << student.nMat << endl;
	cout << "���� : " << student.nSum << endl;
	cout << "��� : " << student.dAvg << endl;

	cout << sizeof(student) << endl;

	return 0;
}