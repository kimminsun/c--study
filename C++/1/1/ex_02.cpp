#include<iostream>
using namespace std;
int main()
{
	int salary, rest;
	while (true){
		cout << "������ �Է����ּ��� : ";
		cin >> salary;
		if (salary == 0) break;
		int sum = 0;
		int per = 50000;	
		bool flg = true;
		while (salary > 0){
			rest = salary / per;
			salary = salary - per*rest;
			cout << per << "��" << rest << " ��" << endl;
			sum += rest;
			if (flg)per= per / 5;
			else per = per / 2;
			flg = flg;

		}
		cout << sum << endl;
	}
}