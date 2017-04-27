#include<iostream>
#include<fstream>
#pragma warning(disable:4996)

using namespace std;

int main(){
	char szBuf[100];
	strcpy(szBuf, "12345 Hello File");
	
	ofstream abc;
	abc.open("out.dat",ios_base::app);
	abc << szBuf << endl;
	abc.close();

	ifstream infile("out.dat");
	infile.getline(szBuf, 100);
	infile.close();

	cout << "Read File: " << szBuf << endl;

	return 0;
}