#include<iostream>
using namespace std;
int main()
{
	int score;
	cout << "점수를 입력하세요 : ";
	cin >> score;

	/*if (score >= 0 || score <= 100){
		if (score >= 90)
		cout << "A";
		else if (score >= 80)
		cout << "B";
		else if (score >= 70)
		cout << "C";
		else if (score >= 60)
		cout << "D";
		else
		cout << "F";
		}
		else
		cout << "점수를 잘못 입력했습니다.";*/
	if (score >= 0 || score <= 100){
		switch (score / 10){
		case 10: case 9:
			cout << "A" << endl;
			break;
		case 8:
			cout << "B" << endl;
			break;
		case 7:
			cout << "C" << endl;
			break;
		case 6:
			cout << "D" << endl;
			break;
		case 5:case 4: case 3:case 2:case 1:
			cout << "F" << endl;
			break;
		default:
			cout << "1~100까지 입력해주세요" << endl;
			break;
		}
	}
}