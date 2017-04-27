#include <iostream>

using namespace std;

int main(){
	int nArray[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int* pArray = 0;

	pArray = nArray;
	cout << "*pArray = " << *pArray << ", nArray[0] = " << nArray[0] << endl;

	*pArray = 10;
	cout << "*pArray = " << *pArray << ", nArray[0] = " << nArray[0] << endl;

	pArray = &nArray[1];
	cout << "*pArray = " << *pArray << ", nArray[1] = " << nArray[1] << endl;

	cout << "sizeof(pArray) = " << sizeof(pArray) << endl;	//4
	cout << "sizeof(*pArray) = " << sizeof(*pArray) << endl;	//4
	cout << "sizeof(nArray) = " << sizeof(nArray) << endl;	//40

	return 0;
}