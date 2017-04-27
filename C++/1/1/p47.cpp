#include<iostream>
using namespace std;
int main()
{
	char* pMessage = "welcome to korea";
	cout << *pMessage << endl;
	cout << *(pMessage + 1) << endl;
	cout << *(pMessage + 8) << endl;
	cout << *pMessage + 1 << endl;
	cout << pMessage << endl;
	cout << &*pMessage << endl;

	for (int i = 0; i <= 16; i++)
		cout << *(pMessage + i) << endl;

	for (int i = 0; i <= 16; i++){
		if ((*(pMessage + i) == 0))
			break;
		else
			cout << pMessage[i] << endl;
	}
			
	}
