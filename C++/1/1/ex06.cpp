#include<iostream>
using namespace std;
int main(){
	char a;
	cin >> a;
	if (isalpha(a)){
		cout << "영문자입니다" << endl;

		if (isupper(a))
			cout << a << "는 대문자 입니다\n";
		
		else
			cout << a << "는 소문자 입니다\n";
	}

	else{
		//cout << "영문자가 아닙니다" << endl;

		if (isdigit(a))
			cout << a << "는 숫자입니다";

		else
			cout << a << "는 숫자가 아닙니다.";
	}
	
	return 0;
}