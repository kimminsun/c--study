#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "정수를 입력하세요 : ";
	cin >> num;

	if (num > 0)
		cout <<num<< "은양수입니다";
	else if (num < 0)
		cout << num<<"은음수입니다";
	else
		cout << "0입니다";

	return 0;
}