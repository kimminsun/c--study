#include<iostream>
using namespace std;
int main()
{
	int ccnt= 0; int i = 2;
	while (i<=100)
	{
		int cnt= 0; int j = 1;
		while (j <= i / 2){
			if (cnt == 0) cnt++;
			i++;
		}
		if (cnt== 0){ ccnt++; cout << i << " "; }
	}
		cout << endl << ccnt<< "°³" << endl;
		
	return 0;


}