#include<iostream>
using namespace std;
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	cout << a << endl;
	/*const int *p1 = &a[0];
	//cout << a << endl;
	cout << p1 << endl;
	//cout << &a[1] << endl;
	p1++;
	cout << p1 << endl;
	//*p1 = 5;

	 int *const p2 = &a[0];
	cout << p2 << endl;
	//p2++;
	*p2 = 5;
	cout << p2 << endl;

	const int *const p3 = &a[0];
	cout << p3 << endl;
	//p3++;
	//*p3 = 5;
	//cout << p2 << endl;*/

	/*const char *p1="abcde" ;
	cout << p1 << endl;
	p1++;
	cout << p1 << endl;
	p1 = "efgh"; //주소를 바꾼것이다. 내용바꾸는  x
	//&p1 = 'z';
	cout << p1 << endl;

	char * const p2 = "abcd";
	cout << p2 << endl;
	//p2++;
	//p2 = "efgh";
	//*p2 = 'z'; 내용은 바꿀 수 있어야되는데 디버깅에러가 발생, 문자열에서 발생되는 에러, 컴파일 에러는 발생하지 않는다.
	//문자열을 사용하면  const를 사용하면 주소도 내용도 바꿀 수 없다. 문자하나바꾸는 것도 디버깅 에러가 발생한다.
	cout << p2 << endl;

	const char *const p3 = "abcd";
	cout << p3 << endl;
	//p3++;
	//*p3=5;*/

	/*char a = 'Z';//캐릭터하나는 포인터로 사용하지 않는다. 사용하고싶으면 NULL을 넣어줘야 한다. 포인터는 배열형태에서 사용
	const char *p1 = &a;
	cout << p1 << endl;*/

	return 0;
	
}