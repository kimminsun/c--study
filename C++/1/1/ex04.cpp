#include<iostream>
using namespace std;
int main(){
	char a;
	cin >> a;
	if (isalpha(a))
		cout << "�������Դϴ�" << endl;
	else
		cout << "�����ڰ� �ƴմϴ�" << endl;
	/*if (a >= 'a' && a<='z')
		cout << a << "�� �ҹ��� �Դϴ�\n";

	else if (a >= 'A' && a<='Z')
		cout << a << "�� �빮�� �Դϴ�\n";

	else 
		cout << a<<"������ �ƴմϴ�\n";*/
	return 0;
}