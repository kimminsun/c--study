#include<iostream>
using namespace std;
int main()
{
	int dan;
	while (true){
		cout << "������ ���α׷��Դϴ�" << endl;
		cout << "x�� ������ ���� 0�� ������ ��ü���" << endl;
		cout << "����� ���� �Է����ּ��� : " ;

		cin >> dan;




		if (dan == 0){
			for (int i = 1; i <= 9; i++){
				for (int j = 1; j <= 9; j++)
					cout << i << "x" << j << "=" << i*j << endl;
			}
		}

		if (dan <= 9 && dan >= 1){
			for (int k = 1; k <= 9; k++){
				cout << "   " << dan << "x" << k << "=" << (dan*k) << endl;
			}
		}


	}
	return 0;
}