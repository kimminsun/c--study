#include<iostream>
using namespace std;
int main()
{
	char alpha;
	cin >> alpha;
	
	if (islower(alpha))
	{
		
		for (;alpha <='z'; alpha++)
		cout << alpha << endl;
	}

	else
		cout << "소문자가 아닙니다." << endl;

	return 0;
}