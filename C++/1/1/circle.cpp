#include<iostream>
#define PIE 3.14
using namespace std;
int main()
{
	int num;
	cout << "반지름을 입력하세요(정수입력) : ";
	cin >> num;
	cout << "원의 넓이 : " << (PIE*num*num)<<endl;
	return 0;
}