#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "������ �Է��ϼ��� : ";
	cin >> num;

	if (num > 0)
		cout <<num<< "������Դϴ�";
	else if (num < 0)
		cout << num<<"�������Դϴ�";
	else
		cout << "0�Դϴ�";

	return 0;
}