#include<iostream>
using namespace std;
int main(){
	char a;
	cin >> a;
	if (isalpha(a))
		cout << "영문자입니다" << endl;
	else
		cout << "영문자가 아닙니다" << endl;
	/*if (a >= 'a' && a<='z')
		cout << a << "는 소문자 입니다\n";

	else if (a >= 'A' && a<='Z')
		cout << a << "는 대문자 입니다\n";

	else 
		cout << a<<"영문이 아닙니다\n";*/
	return 0;
}