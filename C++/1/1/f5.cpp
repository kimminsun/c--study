#include<iostream>
using namespace std;
int func1(char* a)
{
	if (a == "����")
	{
		return 1;
	}
	else if (a == "����")
	{
		return 2;
	}
	else if (a == "��")
	{
		return 3;
	}
}
int random()
{

}
int main()
{
	char user[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> user[i];
	}
	func1(user);
	
	

}