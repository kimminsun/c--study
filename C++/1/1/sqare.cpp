#include<iostream>
using namespace std;
int main()
{
	int width;
	int height;

	cout << "가로 길이 입력 : ";
	cin >> width;
	cout << "세로 길이 입력 : ";
	cin >> height;
	cout << "사각형의 넓이 : " << width*height<<endl;
	return 0;
}