#include<iostream>
using namespace std;
int main()
{
	int *pArray = 0;
	int i;
	pArray = new int[10];
	for (i = 0; i < 10; i++){
		pArray[i] =  i;
	}
	for (i = 0; i < 10; i++){
		cout << pArray[i] << endl;
	}
	for (i = 0; i < 10; i++){
		 *(pArray+i) = 20+i;
	}
	for (i = 0; i < 10; i++){
		cout << *(pArray+i) << endl;
	}
	for (i = 0; i <= 10; i++){
		if (i % 2 == 1){
			cout << pArray[i] << endl;
		}
		else{
			cout << *(pArray + i) << endl;
		}
	}

	char *pMessage = "abcde";
	cout << *pMessage + 2 << endl;
	delete[] pArray;
	return 0;
}