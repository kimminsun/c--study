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
		cout << "�ҹ��ڰ� �ƴմϴ�." << endl;

	return 0;
}