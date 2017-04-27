/*#include<iostream>
using namespace std;
class Number{
protected:
	int num1, num2;
public:
	void setNumber(int n1, int n2){
		num1 = n1;
		num2 = n2;
	}

};
class Plus : public Number{
	int sum;
public:
	void add(){
		sum = num1 + num2;
	}

	void PrintAdd(){
		cout << num1 << "+" << num2 << "=" << sum << endl;
		
	}

};
int main()
{
	Plus p;
	p.setNumber(4,8);
	p.add();
	p.PrintAdd();



	return 0;
}*/

#include<iostream>
using namespace std;
class Number{
public:
	int num1, num2;

	void setNumber(int n1, int n2){
		num1 = n1;
		num2 = n2;
	}

};
class Plus{
public:
	Number n;
	int sum;

	void add(){
		sum = n.num1 + n.num2;
	}

	void PrintAdd(){
		cout << n.num1 << "+" << n.num2 << "=" << sum << endl;

	}

};
int main()
{
	Plus p;
	p.n.setNumber(4, 8);
	p.add();
	p.PrintAdd();



	return 0;
}