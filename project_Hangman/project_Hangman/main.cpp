#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
void gotoxy(int x, int y);
#pragma warning(disable:4996)
#define LEN 100
#define true 1
#define false 0
using namespace std;

int main(){

	int choose; //switch ������ ���
	FILE *fp;
	char ch;	// ����ڰ� �Է��ϴ� ���ڸ� �����ϴ� ����
	int i, j, k;
	int check[LEN];	// ����ڰ� ������� üũ�ϴ� �迭
	int count;		// ���� ���� ���� ���� üũ
	int isExist;	// �Է��� ���ڰ� ���信 �����ϴ��� üũ
	char length[LEN];

	system("mode con:cols=145 lines=37");
	system("title HANGMAN GAME");
	char guess;
	int cnt2 = 0;
	int discount = 0; //Ʋ���� �� ++
	char notAnswer[] = { 0, };


	if ((fp = fopen("test.txt", "rt")) == NULL)		
	{
		printf("\nData file does not exist.\n");	
		exit(1);
	}
	

	cout << endl;
	cout << endl;
	cout << "   ��      ��     ��     ��       ��    ����       ��      ��      ��     ��       ��" << endl;
	cout << "   ��      �� ���  ��� �� ��    ��  ��            �� ��  �� �� ���  ��� �� ��    ��" << endl;
	cout << "   ������ ��      �� ��   ��  �� ��   ����    ��   ��   �� ��      �� ��   ��  ��" << endl;
	cout << "   ��      �� ������ ��     ���  ��  ��  ��    ��        �� ������ ��     ���" << endl;
	cout << "   ��      �� ��      �� ��       ��    ��    ��    ��        �� ��      �� ��       ��" << endl;
	cout << endl;
	cout << "   1. ���� ���" << endl;
	cout << "   2. ���� ����" << endl;
	cout << "   3. ���� ����" << endl;
	cout << endl;

	/*ifstream ifs("test.txt");

	while (!ifs.eof()){
		for (int i = 0; i <LEN; i++){
			ifs.getline(length[i], LEN);
		}
	}

	ifs.close();*/


	while (true){
		cout << "   �޴� �Է� : ";
		cin >> choose;


	
	

		

		switch (choose){
		case 1:
			cout << endl;
			cout << "   ****************** ��� ���� ���� ******************" << endl;
			cout << "   1. �������� ���ܾ��� ������ŭ '_'�� ǥ�ð� ���´�. " << endl;
			cout << "   2. '_'�� ������ ���� a~z���� ��� �Է��Ѵ�." << endl;
			cout << "   3. ������ 10�ܰ�� �����Ǿ��ֽ��ϴ�! " << endl;
			cout << "   �� ���� ! ���� ! ��" << endl;
			cout << "   ****************************************************" << endl;
			cout << endl;
			break;
		case 2:
			
			/*system("cls");
			cout << endl << endl;
			cout << "**********************************G A M E S T A R T**************************************" << endl;
			cout << endl;
			k = 0;	// Level ���� ���� ����
			while (k<10){

				fscanf(fp, "%s", &length[0]);//���Ͽ��� �� ���ڿ��� �о�� ����
				cout << endl << endl << "-Hangman" << k + 1 << "�ܰ踦 �����մϴ�." << endl << endl;

				for (i = 0; i<(int)strlen(length); i++)	// ���ڿ� ���̸�ŭ �ݺ�
					check[i] = 0;

				for (i = 0; i<15; i++)
				{
					count = 0;
					isExist = false;
					cout << "���� >> ";

					for (j = 0; j<(int)strlen(length); j++)
					{
						if (check[j] == 0)
							cout << "_ ";// ���ڿ��� ũ�⸸ŭ '_' ���
						else			// ���� ���ĺ��� �ִٸ�
							cout << length[j]; 
					}//end of for

					cout << endl << endl << "[" << i + 1 << "]" << "��° �õ�\n";
					fflush(stdin);

					cout << "���ڸ� �Է��ϼ���: ";
					ch = getchar();

					if (isupper(ch))
						ch += 32;	//�Է��� ���� �빮�ڶ�� �ҹ��ڷ� ��ȯ

					if (ch == '0')
						exit(1);

					for (j = 0; j<LEN; j++)	// �Է��� ���ڰ� ���� �ȿ� �����ϴ��� �˻�
					{
						if (length[j] == ch)// ���ڰ� �����Ѵٸ�
						{
							check[j] = 1;// �� ���ڰ� ����� �迭(check)��ġ�� 1�� ����
							isExist = true;	// �Է��� ���ڰ� ���信 ����
						}//end of if
					}//end of for

					if (isExist)//�Է��ѹ��ڰ������Ѵٸ�
						cout << endl << ch << ",�����մϴ�!" << endl;
					else	//�Է��ѹ��ڰ� ���������ʴ´ٸ�
					{
						discount++;
						cout << endl << ch << "�� �������� �ʽ��ϴ�." << endl;



					}

					for (j = 0; j<(int)strlen(length); j++)
					{
						if (check[j] == 1)
							count++;// ������� ���� ������ ������ �ϳ� ����
					}//end of for

					if (count == (int)strlen(length)) // ���� ���ڼ��� ������ ���ڿ� ���̰� ������ �̰�ٰ� ���
					{
						cout << length << "�����Դϴ�!!" << endl;
						break;
					}//end of if
				}//end of for

				k++; // �������ڿ��� ȭ�鿡 ��Ÿ���� ���ؼ� �ε����� ++ �����ش�.
				
				if (i>14){
					cout << "GAMEOVER. ������ " << length << "�Դϴ�" << endl;
					break;	// �޴��� ���ư�
				}//end of if

			}//end of while
			cout << "������ �����մϴ�." << endl;
			break;
			
		
		*/
			/* �ؿ� �ҽ��� ������ �ǳ� �����ϴ°Ͱ� �ٸ��� ���� �ҽ��� �� �� �Դϴ�!!!!!!!!*/

			
			
			system("cls");
			cout << endl << endl;
			count = 0;
			cout << "    *******************************************G A M E S T A R T*******************************************" << endl;
			cout << endl;

		

			
			fscanf(fp, "%s", &length[0]);
			for (j = 0; j<(int)strlen(length); j++)
			{
				
				if (check[j] == 0){
					gotoxy(20,10);
					cout << "_ ";// ���ڿ��� ũ�⸸ŭ '_' ���
				}
			}//end of for

			
			while (true){
			
				gotoxy(3, 4);
				cout << "    Enter letter ���� ";
				cin >> guess;


				for (int i = 0; i < (int)strlen(length); i++){
					if (guess == length[i]){
						count++;
					
						switch (guess){
						case 'a':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'b':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'c':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'd':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'e':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'f':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'g':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'h':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'i':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'j':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'k':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'l':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'm':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'n':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'o':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'p':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'q':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'r':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 's':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 't':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'u':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'v':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'w':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'x':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'y':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						case 'z':
							gotoxy(8 + (i * 4), 19);
							cout << guess;
							break;
						}
						
					}
				}

				if (count == (int)strlen(length)) // ���� ���ڼ��� ������ ���ڿ� ���̰� ������ �̰�ٰ� ���
				{
					gotoxy(3, 20);
					cout << length << "�����Դϴ�!!" << endl;
					break;
				}//end of if

				if (count == 0){
					discount++;
					cout << "\t" << guess << " is INCORRECT" << endl;
					cout << endl << endl;
					cout << "\tINCORRECT LIST\t" << endl;
					for (int i = discount - 1; i < discount; i++){
						notAnswer[discount - 1] = guess;
					}
					cout << "\t";
					for (int i = 0; i < discount; i++){
						cout << " " << notAnswer[i] << "  ";
					}
					switch (discount){
					case 1:
						gotoxy(80, 7);
						cout << "      /   /";
						gotoxy(80, 8);
						cout << "   /         /";
						gotoxy(80, 9);
						cout << "  /           /";
						gotoxy(80, 10);
						cout << "  /           /";
						gotoxy(80, 11);
						cout << "   /         /";
						gotoxy(80, 12);
						cout << "      /   /";
						break;
					case 2:
						for (int i = 0; i < 7; i++) {
							gotoxy(88, 13 + i);
							cout << "|";
						}
						break;
					case 3:
						gotoxy(84, 14);
						cout << "��";
						gotoxy(85, 15);
						cout << "��";
						gotoxy(86, 16);
						cout << "��";
						break;
					case 4:
						gotoxy(91, 14);
						cout << "��";
						gotoxy(90, 15);
						cout << "��";
						gotoxy(89, 16);
						cout << "��";
						break;
					case 5:
						gotoxy(87, 20);
						cout << "��";
						gotoxy(86, 21);
						cout << "��";
						gotoxy(85, 22);
						cout << "��";
						gotoxy(84, 23);
						cout << "��";
						break;
					case 6:
						gotoxy(89, 20);
						cout << "��";
						gotoxy(90, 21);
						cout << "��";
						gotoxy(91, 22);
						cout << "��";
						gotoxy(92, 23);
						cout << "��";
						break;
					}
				}

				count = 0;
				if (discount == 6){
					system("cls");
					gotoxy(4, 10);
					cout << "\tGAME OVER !" << endl;
					cout << "\tstart again? " << endl;
					break;
				} //if
				cnt2++;
			}

			count = 0;
		


		
			break;

		case 3:
			cout << "������ �����մϴ�" << endl;
			return -1;
			break;
		}//switch
	}//if
	return 0;
}//end of main
void gotoxy(int x, int y){
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}