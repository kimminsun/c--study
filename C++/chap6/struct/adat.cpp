#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream org("adat.cpp");
	ofstream des("d.dat");

	char burffer[1024];
	for (;;)
	{
		org.read(burffer, 1024);
		int ncount = org.gcount();
		if (ncount == 0)
			break;

		des.write(burffer, ncount);
	}




	org.close();
	des.close();
	return 0;
}