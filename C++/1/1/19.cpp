#include<iostream>
using namespace std;
int main()
{
	int dan;
	while (true){
		cout << "구구단 프로그램입니다" << endl;
		cout << "x를 누르면 종료 0을 누르면 전체출력" << endl;
		cout << "출력할 단을 입력해주세요 : " ;

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