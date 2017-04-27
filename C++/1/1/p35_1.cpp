#include<iostream>
using namespace std;
#define A 10
//const int A = 10;
#define SQ(x,y) ((x-y)*(x-y))
#define P(x) ((x)*(x)*(x))
#define MAX(x,y) ((x)>(y)?(x):(y))
int main()
{

	cout << A<<endl;
	//A = 20;

	cout << SQ(5, 3)<<endl;

	cout << P(8-3) << endl;

	int i=0, j=1, k = 0;
	i = MAX(++j, ++k); //해결불가능
	cout << i << endl;

	cout << P(++j) << endl; // 증가,증가,증가 하면 6이니 6*6*6 결과는 216

	cout << short(SHRT_MAX +1)<< endl;

	cout << DBL_MAX << endl;

	/*int r;
	cout << "반지름 입력 : ";
	cin >> r;
	cout << r*r*PI << endl;

	cout << "두수를 입력하세요 : ";
	int x, y;
	cin >> x >> y;
	//cout << MAX(x, y) << "(이/가) 큽니다"<<endl;
	cout << MUL(x - y)<<endl;
	cout << MUL(x+y)<<endl; //a가 3이고  b가 5면 3+5*3+5이므로 5*3이 먼저 실행된다.따라서 결과는 23이 나온다.*/

	return 0;
}