#include<iostream>
/*#define TRUE 1
#define FALSE 0*/
using namespace std;
/*int main()
{
	bool flag = true;
	while (true){
		if (flag == true)
		{
			flag = false;
			cout << 2103 << endl;
		}
		else 
		{
			cout << "±è¹Î¼±"<<endl;
		}
	}
	return 0;
}*/

int main()
{
	char c;
	cout << "¼ýÀÚ ÇÑ ÀÚ¸® ÀÔ·Â : ";
	cin >> c;
	cout << (char)(100 - (c-'0')) << endl;
	return 0;
}