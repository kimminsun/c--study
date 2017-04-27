#include<iostream>
using namespace std;
int main()
{
	int i;
	char *pMessage = "welcome to korea";

	for (i = 0; *(pMessage + i) != '\0'; i++);
	cout << "count=" << i << endl;
	return 0;
}