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
	i = MAX(++j, ++k); //�ذ�Ұ���
	cout << i << endl;

	cout << P(++j) << endl; // ����,����,���� �ϸ� 6�̴� 6*6*6 ����� 216

	cout << short(SHRT_MAX +1)<< endl;

	cout << DBL_MAX << endl;

	/*int r;
	cout << "������ �Է� : ";
	cin >> r;
	cout << r*r*PI << endl;

	cout << "�μ��� �Է��ϼ��� : ";
	int x, y;
	cin >> x >> y;
	//cout << MAX(x, y) << "(��/��) Ů�ϴ�"<<endl;
	cout << MUL(x - y)<<endl;
	cout << MUL(x+y)<<endl; //a�� 3�̰�  b�� 5�� 3+5*3+5�̹Ƿ� 5*3�� ���� ����ȴ�.���� ����� 23�� ���´�.*/

	return 0;
}