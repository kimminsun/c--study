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
		cout << "�й��Է�:";
		cin >> number;

		if (strcmp(number, "0000") == 0){
			cout << "����˴ϴ�." << endl;
			break;
		}
		cout << "�̸��Է�:";
		cin >> name;

		for (int i = 0; i < 4; i++){
			cout << "�����Է�:";
			cin >> score[i];
			total += score[i];
			average = (double)total / 4;
		}
		cout << "�й�:" << number << " �̸�:" << name << " ��������:" << score[0] << " ��������:" << score[1] << " ��������:" << score[2] << " c++����:" << score[3] << " ����:" << total << " ���:" << average << endl;
		total = 0;
	}
}