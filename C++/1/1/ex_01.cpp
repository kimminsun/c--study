#include<iostream>
using namespace std;
int main()
{
	char a = 'A';
	while (true)
	{
		int num = 0;
		cout << "���ڸ� �Է����ּ��� : ";
		cin >> num;
		if (num > 0){
			for (int i = 0; i <num; i++){
				//char a = 'A';
				for (int j = 'A'; j <= i; j++,a++) cout << (char)('A' + (j % 26));
					cout << "*" << endl;
				
			}	
		}
		else 
			break;
	}
	return 0;
}