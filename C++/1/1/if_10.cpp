#include<iostream>
using namespace std;
int main()
{
	char X;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> X;
	
	if (X == 'O')
		cout << "ONE";
	else if (X == 'T')
		cout << "TWO";
	else if (X == 'S')
		cout << "SIX";
	else
		cout << "�ٽ� �Է��Ͻÿ� ";
	
}