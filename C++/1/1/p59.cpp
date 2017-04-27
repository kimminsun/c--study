#include<iostream>
using namespace std;
int main()
{
	/*char szMessage1[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'a', 'r', 'r', 'a', 'r', 'y',0 };
	char szMessage2[] = { "Hello arrary" };
	char szMessage3[] = "Hello arrary";

	cout << szMessage1<< endl;
	cout << szMessage2 << endl;
	cout << szMessage3 << endl;*/

	char szMessage[2][20] = { "Hello arrary", "¾È³çÇÏ¼¼¿ä" };
	cout << szMessage << endl;
	cout << szMessage[0]<< endl;
	cout << &szMessage[1] << endl;
	return 0;
}