#include<iostream>
using namespace std;
int main(){
	char number[5];
	char name[10];

	int score[4];
	int i = 0;
	int total = 0;
	double average = 0;
	while (1){
		cout << "학번입력:";
		cin >> number;

		if (strcmp(number, "0000") == 0){
			cout << "종료됩니다." << endl;
			break;
		}
		cout << "이름입력:";
		cin >> name;

		for (int i = 0; i < 4; i++){
			cout << "점수입력:";
			cin >> score[i];
			total += score[i];
			average = (double)total / 4;
		}
		cout << "학번:" << number << " 이름:" << name << " 국어점수:" << score[0] << " 수학점수:" << score[1] << " 영어점수:" << score[2] << " c++점수:" << score[3] << " 총점:" << total << " 평균:" << average << endl;
		total = 0;
	}
}