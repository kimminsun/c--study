#include<iostream>
using namespace std;
//#define MAX_PEOPLE 2
int main(){
	int MAX_PEOPLE;
	cout << "�� ���� �Է��Ͻðڽ��ϱ�? : ";
	cin >> MAX_PEOPLE;//�� ������ �Է�
	int i = 0, j = 0, k = 0, num = 0;

	char** hakbun = new char*[MAX_PEOPLE]; //�й� ���������� ����
	char** name = new char*[MAX_PEOPLE]; //�̸� ���������� ����
	int** score = new int*[MAX_PEOPLE]; //���� ���������� ����
	int* add = new int[MAX_PEOPLE + 1]; //���������� ������ ����
	for (i = 0; i < MAX_PEOPLE; i++) {
		hakbun[i] = new char[5];
		name[i] = new char[10];
		score[i] = new int[5];
	}

	double* average = new double[MAX_PEOPLE]; //��� ������ ����
	char title[4][5] = { "����", "����", "����", "c++" };

	for (i = 0; i < MAX_PEOPLE; i++) {
		score[i][4] = 0; //���������� �ʱ�ȭ
	}
	for (i = 0; i < MAX_PEOPLE; i++) {
		add[i] = 0; //������ ������ �ʱ�ȭ
	}
	for (i = 0; i < MAX_PEOPLE; i++) {
		cout << "�й��Է�:";
		cin >> hakbun[i];

		if (strcmp(hakbun[i], "0000") == 0) { //�й��� 0000�� �Է��ϸ� ����
			cout << "�����մϴ�." << endl;
			break;
		}
		cout << "�̸��Է�:";
		cin >> name[i];

		for (j = 0; j < 4; j++) {
			cout << title[j] << "�����Է�:";
			cin >> (score[i][j]);
			if (score[i][j]<0 || score[i][j]>100) { //���� �Է°��� 0���� �۰� 100���� ũ��
				j--;
				continue;
			}
			score[i][4] += score[i][j]; //���� ��ü ��+=����
			add[j] += score[i][j]; //�� ���� ��+=�� ����
		}
		cout << endl;
		num++; //���� �Է��� �������� num++�ؼ� ��� �߰�
		average[i] = (double)(score[i][4] / 4); //���
	}
	cout << endl;
	for (i = 0; i < num; i++) { //num�� ����ŭ ���
		cout << "�й�\t�̸�\t����\t����\t����\tC++\t����\t���" << endl;
		cout << hakbun[i] << "\t" << name[i] << "\t" << score[i][0] << "\t" << score[i][1] << "\t" << score[i][2] << "\t" << score[i][3] << "\t" << score[i][4] << "\t" << average[i] << endl;
	}
	cout << "��������\t��������\t��������\tC++����" << endl;
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