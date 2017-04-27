#include<iostream>
using namespace std;
int main()
{
	int nArrarys[2][3] = {
		{ 1, 2, 3 }, {4,5,6}
	};
	/*cout << nArrarys[0] << endl;
	cout << nArrarys << endl;
	cout << &nArrarys[0][0] << endl;
	cout << &nArrarys[0] << endl;*/

	int *pArrays1 = nArrarys[0];
	//int *pArrays2 = nArrarys;
	int *pArrays3 = &nArrarys[0][0];
	//int *pArrays4 = &nArrarys[0];

	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			//cout << nArrarys[i][j]<<" ";
			cout << *(pArrays1 + (i*3+j)) << " ";
		}
		cout << "\n";
	}


}