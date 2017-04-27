#include<iostream>
using namespace std;

int nValue = 10;

void subFunca(){
	static int nVala = 20;
	nVala++;
	cout << nValue<<endl;
	cout << nVala<<endl;
	/*cout<< nValb;
	cout<<nValm;*/
}
void subFuncb(){
	int nValb = 30;
	 nValb++;
	cout << nValue<<endl;
	//cout << nVala;
	cout << nValb<<endl;
	//cout << nValm;
}
int main()
{
	int nValm = 40;
	cout << nValue << endl;
	subFunca();
	subFuncb();
	/*cout << nVala << endl;*/
	/*cout << nValb << endl;*/
	cout << nValm << endl;
	nValue++;
	nValm++;
	
	//nVala++;
	
	

	cout <<"= == == == == == == == == == = "<< endl;
	cout << nValue << endl;
	subFunca();
	subFuncb();
	cout << nValm << endl;
	 nValue++;
	 nValm++;
	

	return 0;

}