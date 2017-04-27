#include<iostream>
#include<string.h>
#pragma warning(disable:4996)
using namespace std;
class Phone{
protected:
	char szNumber[20];

public:
	Phone(){ szNumber[0] = 0; }
	Phone(char* pszNumber){ strcpy(szNumber, pszNumber); }
	virtual ~Phone(){ cout << "Phone�Ҹ���" << endl; }

public:
	void SetNumber(char* pNo){ strcpy(szNumber, pNo); }
	char *GetNumber(){ return szNumber; }

	void Call(){ cout << GetNumber() << "�� ��ȭ�� �Ǵ�" << endl; }
	void ShowInfo(){ cout << "��ȭ��ȣ:" << GetNumber() << endl; }


};
class Camera{
public:
	Camera(){ cout << "Camera ������ " << endl; }
	virtual ~Camera(){ cout << "Camera �Ҹ���" << endl; }

public:
	void Shutter(){ cout << "������ ��´�" << endl; }
};

class MobilePhone :public Phone, public Camera{
public:
	MobilePhone(){ cout << "MoiblePhone������#1\n"; }
	MobilePhone(char *pNumber) :Phone(pNumber){
		cout << "MobilePhone������#2\n";
	}
	virtual ~MobilePhone(){ cout << "MobilePhone�Ҹ���" << endl; }

public:
	void ShowInfo(){
		Phone::ShowInfo();
		cout << "200�鸸 ȭ�� ī�޶�!" << endl;
	}
};
class SmartPhone :public Phone{
	Camera *ca;

public:
	SmartPhone(char *pNumber):Phone(pNumber){
		cout << "SmartPhone������#2\n";
	}
	void Shutter(){ ca->Shutter(); }

	virtual ~SmartPhone(){ cout << "SmartPhone�Ҹ���" << endl; }
};
class MobileDevice{
	Camera ca;
	Phone ph;
public:
	MobileDevice(char *pNumber){
		ph.SetNumber(pNumber);
		//cout << "MobileDevice������#2\n";
	}
	void Call(){
		ph.Call();
	}
	void ShowInfo(){
		ph.ShowInfo();
	}
	void Shutter(){
		ca.Shutter();
	}
	virtual ~MobileDevice(){ cout << "MobilePhone�Ҹ���" << endl; }
};
int main(){
	MobilePhone mp("02-123-4567");
	mp.Call();
	mp.ShowInfo();
	mp.Shutter();

	MobilePhone sp("02-123-4567");
	sp.Call();
	sp.ShowInfo();
	sp.Shutter();

	MobileDevice md("02-123-4567");
	md.Call();
	md.ShowInfo();
	md.Shutter();
	return 0;
}