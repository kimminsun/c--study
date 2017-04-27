#include<iostream>
using namespace std;
void test(int *);
int main()
{
	int x = 10;
	cout << "Before test1 : " << x << endl;
	test(&x);
	cout << "After test1 : " << x << endl;
	return 0;
}
void test(int* x){
	(*x)++;
	cout << "In test : " << *x << endl;
}