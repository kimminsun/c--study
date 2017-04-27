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
	virtual ~Phone(){ cout << "Phone소멸자" << endl; }

public:
	void SetNumber(char* pNo){ strcpy(szNumber, pNo); }
	char *GetNumber(){ return szNumber; }

	void Call(){ cout << GetNumber() << "로 전화를 건다" << endl; }
	void ShowInfo(){ cout << "전화번호:" << GetNumber() << endl; }


};
class Camera{
public:
	Camera(){ cout << "Camera 생성자 " << endl; }
	virtual ~Camera(){ cout << "Camera 소멸자" << endl; }

public:
	void Shutter(){ cout << "사진을 찍는다" << endl; }
};

class MobilePhone :public Phone, public Camera{
public:
	MobilePhone(){ cout << "MoiblePhone생성자#1\n"; }
	MobilePhone(char *pNumber) :Phone(pNumber){
		cout << "MobilePhone생성자#2\n";
	}
	virtual ~MobilePhone(){ cout << "MobilePhone소멸자" << endl; }

public:
	void ShowInfo(){
		Phone::ShowInfo();
		cout << "200백만 화소 카메라!" << endl;
	}
};
class SmartPhone :public Phone{
	Camera *ca;

public:
	SmartPhone(char *pNumber):Phone(pNumber){
		cout << "SmartPhone생성자#2\n";
	}
	void Shutter(){ ca->Shutter(); }

	virtual ~SmartPhone(){ cout << "SmartPhone소멸자" << endl; }
};
class MobileDevice{
	Camera ca;
	Phone ph;
public:
	MobileDevice(char *pNumber){
		ph.SetNumber(pNumber);
		//cout << "MobileDevice생성자#2\n";
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
	virtual ~MobileDevice(){ cout << "MobilePhone소멸자" << endl; }
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