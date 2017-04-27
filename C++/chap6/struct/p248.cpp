#include <iostream>
#include<fstream>
#pragma warning(disable:4996)
using namespace std;
class Student{
	int nNo;
	char szName[20];

public:
	Student(){}
	Student(int no, char* name){
		SetData(no, name);
	}
	void SetData(int no, char* name){
		nNo = no;
		strcpy(szName, name);
	}
	void Save(ofstream& ofs){
		ofs << nNo << szName << endl;
		cout << "SAVE:" << nNo << "," << szName << endl;
	}
	void Read(ifstream& ifs){
		ifs >> nNo >> szName;
		cout << "READ:" << nNo << ", " << szName << endl;
	}
	friend ofstream& operator<<(ofstream& ofs, Student& student){
		ofs << nNo << szName << endl;
		cout << "SAVE:" << nNo << "," << szName << endl;
	}
	friend ifstream& operator>>(ifstream& ifs, Student& student){
		ifs >> nNo >> szName;
		cout << "READ:" << nNo << ", " << szName << endl;
	}
};

int main()
{
	Student student[3];

	student[0].SetData(1, "±èÇÏ³ª");
	student[1].SetData(2, "±èµÎ¸®");
	student[2].SetData(3, "±è¼¼³ª");

	int nCount = sizeof(student) / sizeof(Student);
	cout << nCount << endl;

	ofstream outfile("out3.dat");
	for (int i = 0; i < nCount; i++){
		//student[i].Save(outfile);
		outfile << student[i];
	}
	outfile.close();

	cout << "----------------------------" << endl;

	ifstream infile("out3.dat");
	for (int i = 0; i < nCount; i++){
		//student[i].Read(infile);
		infile >> student[i];
	}
	infile.close();

	return 0;
}
