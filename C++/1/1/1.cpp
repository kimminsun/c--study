#include<iostream>
using namespace std;
/*void main()
{
	std::cout << "hello\n";
	std::cout << 5<<std::endl;
}*/
namespace b1{ 
	int a = 5; 
	void funca(){
		cout << "a���";
	}
} 
namespace b3{ 
	int a = 10;
	void funca(){
		cout << "b���";
	}
}
int main()
{
	cout << b1::a;
	b1::funca();
	int k;
	cin >> k;
}