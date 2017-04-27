#include<iostream>
using namespace std;
int main()
{
	char X;
	cout << "문자를 입력하세요 : ";
	cin >> X;
	
	if (X == 'O')
		cout << "ONE";
	else if (X == 'T')
		cout << "TWO";
	else if (X == 'S')
		cout << "SIX";
	else
		cout << "다시 입력하시오 ";
	
}