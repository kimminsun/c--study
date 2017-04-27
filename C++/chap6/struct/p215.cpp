#include<iostream>
using namespace std;
class Horse{
private:
	int a;
public:
	Horse(){ cout << "말(Horse)생성자" << endl; }
	virtual~Horse(){ cout << "말(Horse)소멸자" << endl; }

	//virtual void Speak()=0;

	virtual void Speak() {
		cout << "말이 웁니다" << endl;
	}
};
	class Bird{
	public:
		Bird(){ cout << "새(Bird)생성자" << endl; }
		virtual~Bird(){ cout << "새(Bird)소멸자" << endl; }

		virtual void Speak(){ cout << "새(Bird)가 웁니다." << endl; }
		virtual void Fly(){ cout << "하늘을 날 수 있습니다." << endl; }
	};
	class Pegasus : public Horse{
		Bird bi;//위임
		int b;

		//다중상속은 문제가 발생할 수 있다. 하나는 상속 하나는 위임으로 하는게 좋다.

	public:
		Pegasus(){ cout << "페가수스(Pegasus)생성자" << endl; }
		~Pegasus(){ cout << "페가수스(Pegasus)소멸자" << endl; }

		/*void Speak(){
			cout << "페가수스가 웁니다." << endl;
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
