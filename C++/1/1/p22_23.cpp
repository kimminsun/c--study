#include<iostream>

using namespace std;

int main()
{
	char cMaxVal = 0x7F;
	unsigned char ucMaxVal = 0xFF;
	cout << "char�� ����(1����Ʈ) : " << (int)(char)(cMaxVal + 1) <<
		"~" << (int)cMaxVal << endl;
	cout << "unsigned char�� ����(1����Ʈ) :" <<
		(int)(char)(ucMaxVal + 1) << "~" << (int)ucMaxVal << endl;

	short sMaxVal = 0x7FFF;
	unsigned short usMaxVal = 0xFFFF;
	cout << "short�� ����(2����Ʈ) : " << (short)(sMaxVal + 1) <<
		"~" << sMaxVal << endl;
	cout << "unsigned short�� ����(1����Ʈ) :" <<
		(unsigned short)(usMaxVal + 1) << "~" << ucMaxVal << endl;

	int iMaxVal = 0x7FFFFFFF;
	unsigned int uiMaxVal = 0xFFFFFFF;
	cout << "int�� ����(4����Ʈ) : " << (iMaxVal + 1) <<
		"~" << iMaxVal << endl;
	cout << "unsigned int�� ����(1����Ʈ) :" <<
		(uiMaxVal + 1) << "~" << uiMaxVal << endl;

	char lMaxVal = 0x7FFFFFFF;
	unsigned long ulMaxVal = 0xFFFFFFF;
	cout << "long�� ����(4����Ʈ) : " << (lMaxVal + 1) <<
		"~" << lMaxVal << endl;
	cout << "unsigned long�� ����(4����Ʈ) :" <<
		(ulMaxVal + 1) << "~" << ulMaxVal << endl;

	return 0;
}