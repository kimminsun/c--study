#include<iostream>
using namespace std;
int main()
{
	/*char alpha;
	cout << "�����ڸ� �Է����ּ��� :";
	cin >> alpha;

	if (isalpha(alpha)){
		for (char p = (isupper(alpha)) ? 'Z' : 'z'); alpha <= p; alpha++)
		cout << alpha;
	}
	if (islower(alpha))
	{

		for (; alpha <= 'z'; alpha++)
			cout << alpha << endl;
	}

	else if (isupper(alpha))
	{
		for (; alpha <= 'Z'; alpha++)
			cout << alpha << endl;
	}
	
	else
		cout << "�����ڰ� �ƴմϴ�." << endl;*/

	char c;
	cin >> c;
	for (char i = c, a = 0; a < 5,i <= 'Z' ; i++, a++)
		cout << i << endl;

	return 0;
}