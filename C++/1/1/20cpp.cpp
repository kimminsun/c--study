#include<iostream>
using namespace std;
int main()
{
	char choice;
	while (true){
		cout << "=========================" << endl;
		cout << "혈액형을 선택해주세요(x종료)" << endl;
		cout << " A형 B형 O형 AB형" << endl;

		cin >> choice;

		switch (choice){
		case 'A':
			cout << "소심하고 조용한 편이다" << endl;
			break;

		case 'B':
			cout << "정이 많고 맺고 끊음이 확실하다" << endl;
			break;

		case 'O':
			cout << "말이 많고 리더를 많이 한다." << endl;
			break;
		case 'AB':
			cout << "냉정하고 계신적이다." << endl;
			break;

		
		}
		if (choice == 'x')
			break;


	}
	return 0;
	
}