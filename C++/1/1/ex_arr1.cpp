#include<iostream>
using namespace std;
int main()
{
	int arr1[3][4];
	int cnt = 1;

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			arr1[i][j]=cnt++;
		}
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			cout << arr1[i][j] << " ";
		}
		cout << "\n";
	}

}