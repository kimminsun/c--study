#include<iostream>
using namespace std;
int main()
{
	char choice;
	while (true){
		cout << "=========================" << endl;
		cout << "�������� �������ּ���(x����)" << endl;
		cout << " A�� B�� O�� AB��" << endl;

		cin >> choice;

		switch (choice){
		case 'A':
			cout << "�ҽ��ϰ� ������ ���̴�" << endl;
			break;

		case 'B':
			cout << "���� ���� �ΰ� ������ Ȯ���ϴ�" << endl;
			break;

		case 'O':
			cout << "���� ���� ������ ���� �Ѵ�." << endl;
			break;
		case 'AB':
			cout << "�����ϰ� ������̴�." << endl;
			break;

		
		}
		if (choice == 'x')
			break;


	}
	return 0;
	
}