#include<iostream>
using namespace std;
int main()
{
	double sum = 0;
	for (int i = 1; i <= 100; i++)
		sum += 1.0 / i;

	cout << sum << endl;
	return 0;
}