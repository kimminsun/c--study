#include<iostream>
using namespace std;
struct POINT{
	int x;
	int y;
}; //��������� �޸𸮰� ������ ���� �׷��� ������� ����

POINT p; //�������� �����ϸ� �⺻�� 0

int main(){
	//POINT p; �������� �����ϸ� �ʱ�ȭ ���� �ʾҴٰ� ����!
	cout << p.x << endl;
	cout << sizeof(POINT) << endl;
	cout << sizeof(p) << endl; //���� �ƹ��ų� �������

	return 0;
}