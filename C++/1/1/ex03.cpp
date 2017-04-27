#include<iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	if (a >= 1 && a <= 100)
		cout << "1부터 100사이의 수 입니다";
	else
		cout << "1부터 100 사이의 수가 아닙니다";
	return 0;
}