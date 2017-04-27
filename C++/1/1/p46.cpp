#include<iostream>
using namespace std;
int main()
{
	int value = 10;
	void *pValue = NULL;

	pValue = &value;

	cout << "pValue= " << pValue << endl;
	cout << "*pValue = " << *(int*)pValue << endl;
	cout << "value = " << value << endl;

	*(int*)pValue = 20;

	cout << "pValue=" << pValue << endl;
	cout << "*pValue=" << *(int*)pValue << endl;
	cout << "value=" << value << endl;


}