#include<iostream>
using namespace std;
int main()
{
	int cnt = 0; int result = 0;
	int sum = 0;	int num = 0;
	char answer;
	while (true){
		cout << "숫자를입력해주세요 : ";
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
		cout << cnt<<"개"<<endl;
		cnt = 0;
			cout << "계속 진행 하시겠습니까 ? " << endl;
			cout << "계속하려면 'Y'를 중지하려면 'N'을 누르세요.";
			cin >> answer;

		if ((toupper(answer) == 'Y'))
		{
			cout << "계속 진행 합니다" << endl;
			continue;
		}
		else 
		{
			cout << "중지합니다" << endl;
			break;
		}
	}
	return 0;
}