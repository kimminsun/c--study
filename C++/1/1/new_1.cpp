#include<iostream>
using namespace std;
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	cout << a << endl;
	/*const int *p1 = &a[0];
	//cout << a << endl;
	cout << p1 << endl;
	//cout << &a[1] << endl;
	p1++;
	cout << p1 << endl;
	//*p1 = 5;

	 int *const p2 = &a[0];
	cout << p2 << endl;
	//p2++;
	*p2 = 5;
	cout << p2 << endl;

	const int *const p3 = &a[0];
	cout << p3 << endl;
	//p3++;
	//*p3 = 5;
	//cout << p2 << endl;*/

	/*const char *p1="abcde" ;
	cout << p1 << endl;
	p1++;
	cout << p1 << endl;
	p1 = "efgh"; //�ּҸ� �ٲ۰��̴�. ����ٲٴ�  x
	//&p1 = 'z';
	cout << p1 << endl;

	char * const p2 = "abcd";
	cout << p2 << endl;
	//p2++;
	//p2 = "efgh";
	//*p2 = 'z'; ������ �ٲ� �� �־�ߵǴµ� ����뿡���� �߻�, ���ڿ����� �߻��Ǵ� ����, ������ ������ �߻����� �ʴ´�.
	//���ڿ��� ����ϸ�  const�� ����ϸ� �ּҵ� ���뵵 �ٲ� �� ����. �����ϳ��ٲٴ� �͵� ����� ������ �߻��Ѵ�.
	cout << p2 << endl;

	const char *const p3 = "abcd";
	cout << p3 << endl;
	//p3++;
	//*p3=5;*/

	/*char a = 'Z';//ĳ�����ϳ��� �����ͷ� ������� �ʴ´�. ����ϰ������ NULL�� �־���� �Ѵ�. �����ʹ� �迭���¿��� ���
	const char *p1 = &a;
	cout << p1 << endl;*/

	return 0;
	
}