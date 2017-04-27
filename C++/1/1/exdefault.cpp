#include<iostream>
using namespace std;

//뒤에부터 매개변수값을 지정해줘야한다.
//void print(int a, int b = 0, int c = 0, int d){};
void print1(int a, int b , int c = 0, int d=0){};
//void print2(int a=1, int b , int c = 0, int d=0){};
void print3(int a=1, int b = 2, int c = 3, int d=4){};
void print(){}
void print(int a = 1, int b = 2){}


int main()
{
	print();
	return 0;
}