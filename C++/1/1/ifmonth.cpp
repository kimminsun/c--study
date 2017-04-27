#include<iostream>
using namespace std;

int main()
{
	int month;
	cout << "1월부터12월중에 하나를 입력하세요 : ";
	cin >> month;

	if ((month == 1)||(month==3)||(month== 5)||(month== 7)||(month== 8)||(month== 10)||(month== 12))
		cout << month << "월은 31일까지 있습니다."<<endl;
	else if ((month == 4)||(month== 6)||(month== 9)||(month== 11))
		cout << month << "월은 30일까지 있습니다."<<endl;
	else if (month == 2)
		cout << month << "월은 28일까지 있습니다."<<endl;
	else
		cout << "1~12월까지 입력해주세요."<<endl;

	return 0;
}