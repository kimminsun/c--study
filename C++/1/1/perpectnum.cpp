#include<iostream>
using namespace std;
int main()
{
	int cnt = 0; int result = 0;
	int sum = 0;	int num = 0;
	char answer;
	while (true){
		cout << "���ڸ��Է����ּ��� : ";
		cin >> num;
		for (int i = 1; i <= num; i++)
		{
			sum = 0;
			for (int j = 1; j < i; j++)
			{
				if (i%j == 0)
					sum += j;
			}
			if (sum == i)
			{
				cout << i << endl;
				cnt++;
			}
		}
		cout << cnt<<"��"<<endl;
		cnt = 0;
			cout << "��� ���� �Ͻðڽ��ϱ� ? " << endl;
			cout << "����Ϸ��� 'Y'�� �����Ϸ��� 'N'�� ��������.";
			cin >> answer;

		if ((toupper(answer) == 'Y'))
		{
			cout << "��� ���� �մϴ�" << endl;
			continue;
		}
		else 
		{
			cout << "�����մϴ�" << endl;
			break;
		}
	}
	return 0;
}