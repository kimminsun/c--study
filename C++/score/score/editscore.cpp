#include<iostream>
using namespace std;
int main(){

	int choice; // 메뉴선택
	int MAX_PEOPLE=0 ;//동적할당할인원

	char** hakbun = new char*[MAX_PEOPLE]; //학번
	char** name = new char*[MAX_PEOPLE]; //이름
	int** score = new int*[MAX_PEOPLE]; //점수

	int *total = new int[5]; //총점
	double *average = new double[MAX_PEOPLE]; //평균
	double *t_average = new double[6]; //평균의평균
	int *rank = new int[MAX_PEOPLE]; //석차구하기

	char title[4][5] = { "국어", "영어", "수학", "c++" };
	int i, j;
	while (true){
		cout << "=========성적 처리 프로그램 ===============" << endl;
		cout << "1.  입력 " << endl;
		cout << "2.  출력" << endl;
		cout << "3.  종료" << endl;
		cout << "===========================================" << endl;


		cout << "선택해주세요 : ";
		cin >> choice;
	
		switch (choice)
		{

		case 1:
			cout << "몇 명을 입력하실겁니까 ? ";
			cin >> MAX_PEOPLE;

			for (int k = 0; k < MAX_PEOPLE; k++){
				hakbun[k] = new char[15];
				name[k] = new char[20];
				score[k] = new int[20];
			}//동적할당

			for (i = 0; i < MAX_PEOPLE; i++){
				score[i][4] = 0;
				cout << endl;
				cout << "학번입력:";
				cin >> hakbun[i];

				if (strcmp(hakbun[i], "0000") == 0){
					cout << "종료합니다." << endl;
					break;
				}

			
				cout << "이름 입력:";
				cin >> name[i];

				for (j = 0; j < 4; j++) {
					while (1) {
						cout << title[j] << "점수입력:";
						cin >> score[i][j];
						if (score[i][j] <= 100) {
							break;
						}
					}
					score[i][4] += score[i][j];
				}
				average[i] = (double)score[i][4] / 4;
			}//점수 입력 
			for (int i = 0; i < 6; i++) {
				total[i] = 0;
				t_average[i] = 0;
			}//총점과 평균 0으로 초기화

			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < MAX_PEOPLE; j++) {
					total[i] += score[j][i];
				}
			}//총점구하기 

			for (int i = 0; i < 6; i++){
				t_average[i] = (double)(total[i]) / (double)(MAX_PEOPLE);
				
			}//평균구하기

			for (int i = 0; i < MAX_PEOPLE; i++){
				rank[i] = 1;
			}
			for (int i = 0; i < MAX_PEOPLE - 1; i++){
				for (int j = i + 1; j < MAX_PEOPLE; j++){
					if (score[i][4] < score[j][4]){
						rank[i]++;
					}
					else if (score[j][4] < score[i][4]){
						rank[j]++;
					}
				}
			}//석차구하기
			t_average[5] = (double)(total[i]) / (double)(4) / (double)(MAX_PEOPLE);
			break;
	

		case 2:
			
			cout << "=====================================================================================" << endl;
			cout << "학번	이름	국어	수학	영어	c++	총점 	  평균 	  석차" << endl;
			for (j = 0; j < MAX_PEOPLE; j++){
				cout << hakbun[j] << "	" << name[j] << "   " << score[j][0] << "\t " << score[j][1] << "\t " << score[j][2] << "\t " << score[j][3] << "\t" << score[j][4] << "\t";
				printf("%7.2f\t     ", average[j]);
				cout << rank[j] << endl;
			}
			cout << "===============================================================================" << endl;
			printf("총점\t\t%-1d\t%2d\t%2d\t%2d\t%3d\n", total[0], total[1], total[2], total[3], total[4]);
			cout << "===============================================================================" << endl;
			printf("평균          %-6.2f %6.2f  %6.2f  %6.2f\t\t %6.2f\n", t_average[0], t_average[1], t_average[2], t_average[3], t_average[5]); 
			cout << "아무키나 입력해주세요";
			getchar(); getchar();

			break;
		
		case 3:
			exit(0);

		default:
			cout << "1,2,3중에 선택해주세요!!" << endl;

		}//switch
		system("cls");
	}//while
	for (int k = 0; k < MAX_PEOPLE; k++){
		delete[] hakbun[k];
		delete[] name[k];
		delete[] score[k];
	}
	delete[] total;
	delete[] t_average;
	delete[] average;
	delete[] rank;
}//main 