#include<iostream>
using namespace std;
class Horse{
private:
	int a;
public:
	Horse(){ cout << "��(Horse)������" << endl; }
	virtual~Horse(){ cout << "��(Horse)�Ҹ���" << endl; }

	//virtual void Speak()=0;

	virtual void Speak() {
		cout << "���� ��ϴ�" << endl;
	}
};
	class Bird{
	public:
		Bird(){ cout << "��(Bird)������" << endl; }
		virtual~Bird(){ cout << "��(Bird)�Ҹ���" << endl; }

		virtual void Speak(){ cout << "��(Bird)�� ��ϴ�." << endl; }
		virtual void Fly(){ cout << "�ϴ��� �� �� �ֽ��ϴ�." << endl; }
	};
	class Pegasus : public Horse{
		Bird bi;//����
		int b;

		//���߻���� ������ �߻��� �� �ִ�. �ϳ��� ��� �ϳ��� �������� �ϴ°� ����.

	public:
		Pegasus(){ cout << "�䰡����(Pegasus)������" << endl; }
		~Pegasus(){ cout << "�䰡����(Pegasus)�Ҹ���" << endl; }

		/*void Speak(){
			cout << "�䰡������ ��ϴ�." << endl;
		}*/
		void Fly(){
			bi.Fly();
		}
	};
	int main()
	{
		Horse *a = new Pegasus();
		a->Speak();

		return 0;
		
	}
