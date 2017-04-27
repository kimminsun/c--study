#include<iostream>
using namespace std;
inline int Add(int ,int );
int func2(int, int);
int main()
{
	int n1, n2;
	cout << "두 수를 입력하세요 : ";
	cin >> n1 >> n2;
	cout << Add(n1, n2) << endl;
	cout << func2(n1, n2) << endl;
	return 0;
}
inline int Add(int n1, int n2)
{
	return  n1 + n2;

}
int func2(int a, int b)
{
	float div;
	div = a / b;
	return div;
}