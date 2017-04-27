#include<iostream>
#include<fstream>
#pragma warning(disable:4996)

using namespace std;

int main(){
	int nCount = 10;
	int nNo;
	char szName[20];

	fstream outfile("out3.dat",ios_base::out | ios_base::in | ios_base::trunc);
	for (int i = 0; i < nCount; i++){
		nNo = i + 1;
		sprintf(szName, "ÀÌ¸§_%d", nNo);

		outfile << nNo << szName << endl;
	}
	outfile.seekg(0,ios_base::beg);
	//ifstream infile("out2.dat");
	for (int i = 0; i < nCount; i++){
		outfile >>nNo;
		outfile >>szName;

		cout << i << ":" << nNo << ", " << szName << endl;
	}
	outfile.close();

	return 0;
}