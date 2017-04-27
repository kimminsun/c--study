#include<iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	if (a % 2 == 0)
		cout << a << "는 짝수입니다~";
	else
		cout << a << "는 홀수입니다!";
	return 0;
}