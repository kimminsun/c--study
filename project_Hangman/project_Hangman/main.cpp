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

	int choose; //switch 문에서 사용
	FILE *fp;
	char ch;	// 사용자가 입력하는 문자를 저장하는 변수
	int i, j, k;
	int check[LEN];	// 사용자가 맞췄는지 체크하는 배열
	int count;		// 현재 맞춘 글자 수를 체크
	int isExist;	// 입력한 문자가 정답에 존재하는지 체크
	char length[LEN];

	system("mode con:cols=145 lines=37");
	system("title HANGMAN GAME");
	char guess;
	int cnt2 = 0;
	int discount = 0; //틀렸을 때 ++
	char notAnswer[] = { 0, };


	if ((fp = fopen("test.txt", "rt")) == NULL)		
	{
		printf("\nData file does not exist.\n");	
		exit(1);
	}
	

	cout << endl;
	cout << endl;
	cout << "   ■      ■     ■     ■       ■    ■■■       ■      ■      ■     ■       ■" << endl;
	cout << "   ■      ■ ■■  ■■ ■ ■    ■  ■            ■ ■  ■ ■ ■■  ■■ ■ ■    ■" << endl;
	cout << "   ■■■■■ ■      ■ ■   ■  ■ ■   ■■■    ■   ■   ■ ■      ■ ■   ■  ■" << endl;
	cout << "   ■      ■ ■■■■■ ■     ■■  ■  ■  ■    ■        ■ ■■■■■ ■     ■■" << endl;
	cout << "   ■      ■ ■      ■ ■       ■    ■    ■    ■        ■ ■      ■ ■       ■" << endl;
	cout << endl;
	cout << "   1. 게임 방법" << endl;
	cout << "   2. 게임 시작" << endl;
	cout << "   3. 게임 종료" << endl;
	cout << endl;

	/*ifstream ifs("test.txt");

	while (!ifs.eof()){
		for (int i = 0; i <LEN; i++){
			ifs.getline(length[i], LEN);
		}
	}

	ifs.close();*/


	while (true){
		cout << "   메뉴 입력 : ";
		cin >> choose;


	
	

		

		switch (choose){
		case 1:
			cout << endl;
			cout << "   ****************** 행맨 게임 설명 ******************" << endl;
			cout << "   1. 무작위로 영단어의 개수만큼 '_'이 표시가 나온다. " << endl;
			cout << "   2. '_'의 개수에 맞춰 a~z까지 영어를 입력한다." << endl;
			cout << "   3. 게임은 10단계로 구성되어있습니다! " << endl;
			cout << "   ★ 도전 ! 도전 ! ★" << endl;
			cout << "   ****************************************************" << endl;
			cout << endl;
			break;
		case 2:
			
			/*system("cls");
			cout << endl << endl;
			cout << "**********************************G A M E S T A R T**************************************" << endl;
			cout << endl;
			k = 0;	// Level 수를 세는 변수
			while (k<10){

				fscanf(fp, "%s", &length[0]);//파일에서 한 문자열씩 읽어와 저장
				cout << endl << endl << "-Hangman" << k + 1 << "단계를 시작합니다." << endl << endl;

				for (i = 0; i<(int)strlen(length); i++)	// 문자열 길이만큼 반복
					check[i] = 0;

				for (i = 0; i<15; i++)
				{
					count = 0;
					isExist = false;
					cout << "문제 >> ";

					for (j = 0; j<(int)strlen(length); j++)
					{
						if (check[j] == 0)
							cout << "_ ";// 문자열의 크기만큼 '_' 출력
						else			// 맞춘 알파벳이 있다면
							cout << length[j]; 
					}//end of for

					cout << endl << endl << "[" << i + 1 << "]" << "번째 시도\n";
					fflush(stdin);

					cout << "문자를 입력하세요: ";
					ch = getchar();

					if (isupper(ch))
						ch += 32;	//입력한 답이 대문자라면 소문자로 변환

					if (ch == '0')
						exit(1);

					for (j = 0; j<LEN; j++)	// 입력한 문자가 정답 안에 존재하는지 검사
					{
						if (length[j] == ch)// 문자가 존재한다면
						{
							check[j] = 1;// 그 글자가 저장된 배열(check)위치에 1을 저장
							isExist = true;	// 입력한 문자가 정답에 존재
						}//end of if
					}//end of for

					if (isExist)//입력한문자가존재한다면
						cout << endl << ch << ",존재합니다!" << endl;
					else	//입력한문자가 존재하지않는다면
					{
						discount++;
						cout << endl << ch << "는 존재하지 않습니다." << endl;



					}

					for (j = 0; j<(int)strlen(length); j++)
					{
						if (check[j] == 1)
							count++;// 현재까지 맞춘 글자의 개수를 하나 증가
					}//end of for

					if (count == (int)strlen(length)) // 맞춘 글자수와 정답의 문자열 길이가 같으면 이겼다고 출력
					{
						cout << length << "정답입니다!!" << endl;
						break;
					}//end of if
				}//end of for

				k++; // 다음문자열을 화면에 나타내기 위해서 인덱스를 ++ 시켜준다.
				
				if (i>14){
					cout << "GAMEOVER. 정답은 " << length << "입니다" << endl;
					break;	// 메뉴로 돌아감
				}//end of if

			}//end of while
			cout << "게임을 종료합니다." << endl;
			break;
			
		
		*/
			/* 밑에 소스가 실행이 되나 예상하는것과 다르게 나와 소스가 두 개 입니다!!!!!!!!*/

			
			
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
					cout << "_ ";// 문자열의 크기만큼 '_' 출력
				}
			}//end of for

			
			while (true){
			
				gotoxy(3, 4);
				cout << "    Enter letter ▶▶ ";
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

				if (count == (int)strlen(length)) // 맞춘 글자수와 정답의 문자열 길이가 같으면 이겼다고 출력
				{
					gotoxy(3, 20);
					cout << length << "정답입니다!!" << endl;
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
						cout << "＼";
						gotoxy(85, 15);
						cout << "＼";
						gotoxy(86, 16);
						cout << "＼";
						break;
					case 4:
						gotoxy(91, 14);
						cout << "／";
						gotoxy(90, 15);
						cout << "／";
						gotoxy(89, 16);
						cout << "／";
						break;
					case 5:
						gotoxy(87, 20);
						cout << "／";
						gotoxy(86, 21);
						cout << "／";
						gotoxy(85, 22);
						cout << "／";
						gotoxy(84, 23);
						cout << "／";
						break;
					case 6:
						gotoxy(89, 20);
						cout << "＼";
						gotoxy(90, 21);
						cout << "＼";
						gotoxy(91, 22);
						cout << "＼";
						gotoxy(92, 23);
						cout << "＼";
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
			cout << "게임을 종료합니다" << endl;
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