#include<iostream>
using namespace std;
int func1(char* a)
{
	if (a == "가위")
	{
		return 1;
	}
	else if (a == "바위")
	{
		return 2;
	}
	else if (a == "보")
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