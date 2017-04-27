#include<iostream>
#include<time.h>
using namespace std;
int myRand(int N, int M);
int main()
{
	srand((unsigned)time(0));
	for (int i = 0; i < 100; i++){
		cout <<i<<": ³­¼ö°ª : "<< myRand(0, 9) << endl;
	}
	return 0;
}
int myRand(int N, int M)
{
	int value = 0;
	value = N + (rand()%(M-N));
	return value;
}