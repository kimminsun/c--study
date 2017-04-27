#include<iostream>
using namespace std;

int main()
{
	cout << "char의 크기:" << sizeof(char) << "바이트\n";
	cout << "unsigned char의 크기:" << sizeof(unsigned char)
			<< "바이트\n";

	cout << "shor int의 크기:" << sizeof(short int) << "바이트\n";
	cout << "unsigned short int의 크기:" << sizeof(unsigned short int)
			<< "바이트\n";

	cout << "int의 크기 :" << sizeof(int) << "바이트\n";
	cout << "unsigned int의 크기 :" << sizeof(unsigned int)
			<< "바이트\n";

	cout << "long의 크기 :" << sizeof(long) << "바이트\n";
	cout << "unsigned long의 크기 :" << sizeof(unsigned long)
			<< "바이트\n";

	cout << "float의 크기 :" << sizeof(float) << "바이트\n";
	cout << "double의 크기 :" << sizeof(double) << "바이트\n";

	cout << "포인터 형의 크기 : " << sizeof(void*) << "바이트\n";

	cout << sizeof 5<< endl;
	cout << sizeof(5.7) << endl;
	cout << sizeof(long double) << endl;

	return 0;
}