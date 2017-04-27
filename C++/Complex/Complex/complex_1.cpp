#include<iostream>
using namespace std;
class complex{

public:
	int real;
	int imaginary;
	complex(){
		this->real = 0;
		this->imaginary = 0;
	}
	complex(int real, int imaginary){
		this->real = real;
		this->imaginary = imaginary;
	}
	void printComplex();
	/*complex operator+(complex &a){
	int real = this->real + a.real;
	int imaginary = this->imaginary + a.imaginary;
	return complex(real,imaginary);//함수가 종료되는것을 원할때는  return 타입 complex
	}*/
	complex operator-(complex &a){
		int real = this->real - a.real;
		int imaginary = this->imaginary - a.imaginary;
		return complex(real, imaginary);
	}
	complex operator*(complex &a){
		int real = (this->real * a.real) + ((this->imaginary*a.imaginary)*-1);
		int imaginary = (this->imaginary * a.real) + (this->real * a.imaginary);
		return complex(real, imaginary);
	}
	complex& operator++(){
		this->real++;
		return *this;
	}
	complex operator++(int){
		int real = this->real;
		real++;
		return complex(real, this->imaginary);
	}
};
complex operator+(complex& home, complex &a){
	int real = home.real + a.real;
	int imaginary = home.imaginary + a.imaginary;
	return complex(real, imaginary);//함수가 종료되는것을 원할때는  return 타입 complex
}
void complex::printComplex(){

	if (real == 0 && imaginary == 0){
		cout << "0" << endl;
	}
	else if (imaginary < 0){

		if (real == 0){
			cout << imaginary << "i" << endl;
		}
		else
		if (imaginary == -1){
			cout << real << "" << "-i" << endl;
		}
		else{
			cout << real << "" << imaginary << "i" << endl;
		}


	}

	else if (imaginary == 0){
		if (real == 0){
			cout << "0" << endl;
		}
		else
			cout << real << endl;
	}

	else{
		if (real == 0){
			cout << imaginary << "i" << endl;
		}
		else
		if (imaginary == -1){
			cout << real << "" << "-i" << endl;
		}
		else{
			cout << real << "+" << imaginary << "i" << endl;
		}

	}
}


int main(){
	complex a(3, 5);
	a.printComplex();
	complex b(4, -7);
	b.printComplex();
	complex c(-5, 6);
	c.printComplex();
	complex d(-9, -3);
	d.printComplex();
	complex e(0, 7);
	e.printComplex();
	complex f(3, 0);
	f.printComplex();
	complex g(0, 0);
	g.printComplex();
	complex h;
	h = a + b;
	//h = operator+(a, b);
	//둘의 값은 같음(일반함수여도 가능)
	//단 클래스 내의  operator의 주석을 풀면 에러!

	cout << "-------------------" << endl;
	a.printComplex();
	b.printComplex();
	c.printComplex();
	h.printComplex();
	cout << "-------------------" << endl;
	complex k;
	k = c - b;
	k.printComplex();
	c.printComplex();
	h.printComplex();
	cout << "-------------------" << endl;
	a.printComplex();
	b.printComplex();
	complex l;
	l = a*b;
	l.printComplex();
	cout << "-------------------" << endl;
	a.printComplex();
	complex n;
	n = a++;
	a.printComplex();
	n.printComplex();
	return 0;
}