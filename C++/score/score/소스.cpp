#include<iostream>
using namespace std;
//#define MAX_PEOPLE 2
int main(){
	int MAX_PEOPLE;
	cout << "몇 명을 입력하시겠습니까? : ";
	cin >> MAX_PEOPLE;//몇 명인지 입력
	int i = 0, j = 0, k = 0, num = 0;

	char** hakbun = new char*[MAX_PEOPLE]; //학번 이중포인터 선언
	char** name = new char*[MAX_PEOPLE]; //이름 이중포인터 선언
	int** score = new int*[MAX_PEOPLE]; //과목 이중포인터 선언
	int* add = new int[MAX_PEOPLE + 1]; //과목점수합 포인터 선언
	for (i = 0; i < MAX_PEOPLE; i++) {
		hakbun[i] = new char[5];
		name[i] = new char[10];
		score[i] = new int[5];
	}

	double* average = new double[MAX_PEOPLE]; //평균 포인터 선언
	char title[4][5] = { "국어", "영어", "수학", "c++" };

	for (i = 0; i < MAX_PEOPLE; i++) {
		score[i][4] = 0; //과목포인터 초기화
	}
	for (i = 0; i < MAX_PEOPLE; i++) {
		add[i] = 0; //과목합 포인터 초기화
	}
	for (i = 0; i < MAX_PEOPLE; i++) {
		cout << "학번입력:";
		cin >> hakbun[i];

		if (strcmp(hakbun[i], "0000") == 0) { //학번에 0000을 입력하면 종료
			cout << "종료합니다." << endl;
			break;
		}
		cout << "이름입력:";
		cin >> name[i];

		for (j = 0; j < 4; j++) {
			cout << title[j] << "점수입력:";
			cin >> (score[i][j]);
			if (score[i][j]<0 || score[i][j]>100) { //과목 입력값이 0보다 작고 100보다 크면
				j--;
				continue;
			}
			score[i][4] += score[i][j]; //과목 전체 합+=과목
			add[j] += score[i][j]; //각 과목 합+=각 과목
		}
		cout << endl;
		num++; //과목 입력이 끝났으면 num++해서 명수 추가
		average[i] = (double)(score[i][4] / 4); //평균
	}
	cout << endl;
	for (i = 0; i < num; i++) { //num의 수만큼 출력
		cout << "학번\t이름\t국어\t수학\t영어\tC++\t총점\t평균" << endl;
		cout << hakbun[i] << "\t" << name[i] << "\t" << score[i][0] << "\t" << score[i][1] << "\t" << score[i][2] << "\t" << score[i][3] << "\t" << score[i][4] << "\t" << average[i] << endl;
	}
	cout << "국어총점\t수학총점\t영어총점\tC++총점" << endl;
	cout << add[0] << "\t\t" << add[1] << "\t\t" << add[2] << "\t\t" << add[3] << endl;
	for (i = 0; i < MAX_PEOPLE; i++) {
		delete[] hakbun[i];
		delete[] name[i];
		delete[] score[i];
	}
	delete[] hakbun;
	delete[] name;
	delete[] score;

}