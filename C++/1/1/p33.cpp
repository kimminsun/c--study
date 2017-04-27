#include<iostream>

using namespace std;

void subFuncA(){
	int nVal = 10;

	cout << "subFuncA::nVal=" << nVal << endl;
	nVal++;
}
void subFuncB(){
	static int nVal = 10;

	cout << "subFuncB::nVal=" << nVal << endl;
	nVal++;
}
int main()
{
	subFuncA();
	subFuncA();
	subFuncA();

	subFuncB();
	subFuncB();
	subFuncB();

	return 0;
}