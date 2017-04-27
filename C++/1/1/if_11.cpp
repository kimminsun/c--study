#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 5;
	cout <<"a="<< a << "b=" << b << endl;
	if (a + b > 0){
		int c = 4;
		cout << "(a+b-c)=" << (a + b - c);
	}
	else{
		cout << "a+b<0 입니다. 다시 하세요";
	}

}