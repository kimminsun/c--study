#include<iostream>
using namespace std;
int main(){

	int choice; // �޴�����
	int MAX_PEOPLE=0 ;//�����Ҵ����ο�

	char** hakbun = new char*[MAX_PEOPLE]; //�й�
	char** name = new char*[MAX_PEOPLE]; //�̸�
	int** score = new int*[MAX_PEOPLE]; //����

	int *total = new int[5]; //����
	double *average = new double[MAX_PEOPLE]; //���
	double *t_average = new double[6]; //��������
	int *rank = new int[MAX_PEOPLE]; //�������ϱ�

	char title[4][5] = { "����", "����", "����", "c++" };
	int i, j;
	while (true){
		cout << "=========���� ó�� ���α׷� ===============" << endl;
		cout << "1.  �Է� " << endl;
		cout << "2.  ���" << endl;
		cout << "3.  ����" << endl;
		cout << "===========================================" << endl;


		cout << "�������ּ��� : ";
		cin >> choice;
	
		switch (choice)
		{

		case 1:
			cout << "�� ���� �Է��Ͻǰ̴ϱ� ? ";
			cin >> MAX_PEOPLE;

			for (int k = 0; k < MAX_PEOPLE; k++){
				hakbun[k] = new char[15];
				name[k] = new char[20];
				score[k] = new int[20];
			}//�����Ҵ�

			for (i = 0; i < MAX_PEOPLE; i++){
				score[i][4] = 0;
				cout << endl;
				cout << "�й��Է�:";
				cin >> hakbun[i];

				if (strcmp(hakbun[i], "0000") == 0){
					cout << "�����մϴ�." << endl;
					break;
				}

			
				cout << "�̸� �Է�:";
				cin >> name[i];

				for (j = 0; j < 4; j++) {
					while (1) {
						cout << title[j] << "�����Է�:";
						cin >> score[i][j];
						if (score[i][j] <= 100) {
							break;
						}
					}
					score[i][4] += score[i][j];
				}
				average[i] = (double)score[i][4] / 4;
			}//���� �Է� 
			for (int i = 0; i < 6; i++) {
				total[i] = 0;
				t_average[i] = 0;
			}//������ ��� 0���� �ʱ�ȭ

			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < MAX_PEOPLE; j++) {
					total[i] += score[j][i];
				}
			}//�������ϱ� 

			for (int i = 0; i < 6; i++){
				t_average[i] = (double)(total[i]) / (double)(MAX_PEOPLE);
				
			}//��ձ��ϱ�

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
			}//�������ϱ�
			t_average[5] = (double)(total[i]) / (double)(4) / (double)(MAX_PEOPLE);
			break;
	

		case 2:
			
			cout << "=====================================================================================" << endl;
			cout << "�й�	�̸�	����	����	����	c++	���� 	  ��� 	  ����" << endl;
			for (j = 0; j < MAX_PEOPLE; j++){
				cout << hakbun[j] << "	" << name[j] << "   " << score[j][0] << "\t " << score[j][1] << "\t " << score[j][2] << "\t " << score[j][3] << "\t" << score[j][4] << "\t";
				printf("%7.2f\t     ", average[j]);
				cout << rank[j] << endl;
			}
			cout << "===============================================================================" << endl;
			printf("����\t\t%-1d\t%2d\t%2d\t%2d\t%3d\n", total[0], total[1], total[2], total[3], total[4]);
			cout << "===============================================================================" << endl;
			printf("���          %-6.2f %6.2f  %6.2f  %6.2f\t\t %6.2f\n", t_average[0], t_average[1], t_average[2], t_average[3], t_average[5]); 
			cout << "�ƹ�Ű�� �Է����ּ���";
			getchar(); getchar();

			break;
		
		case 3:
			exit(0);

		default:
			cout << "1,2,3�߿� �������ּ���!!" << endl;

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