#include<iostream>
using namespace std;
int main(){
	char a;
	cin >> a;
	if (isalpha(a)){
		cout << "�������Դϴ�" << endl;

		if (isupper(a))
			cout << a << "�� �빮�� �Դϴ�\n";
		
		else
			cout << a << "�� �ҹ��� �Դϴ�\n";
	}

	else{
		//cout << "�����ڰ� �ƴմϴ�" << endl;

		if (isdigit(a))
			cout << a << "�� �����Դϴ�";

		else
			cout << a << "�� ���ڰ� �ƴմϴ�.";
	}
	
	return 0;
}