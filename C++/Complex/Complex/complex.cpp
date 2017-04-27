#include<iostream>
using namespace std;
class complex{
private:
	int real, imaginary;

public:
	complex(int real,int imaginary){
		this->real = real;
		this->imaginary = imaginary;
	}
	complex(){
		real = 0;
		imaginary = 0;
	}
	void PrintComplex(){
		if (imaginary == 1){
			cout << real << "+i" << endl;
		}
		else if (imaginary == -1){
			cout << real << "-i" << endl;
		}
		else if (imaginary > 0){
			cout << real << "+" << imaginary << "i" << endl;
		}
		else if (imaginary == 0){
			cout << real<<endl;
		}
		else if (real == 0){
			cout << imaginary << "i" << endl;
		}
		else if(imaginary<0){
			cout << real << imaginary << "i" << endl;
		}
		
	}
	/*complex operator+(complex &c){
		int real = this->real + c.real;
		int imaginary = this->imaginary + c.imaginary;

		return complex (real,imaginary);
	}*/
	complex operator-(complex &d){
		int real = this->real - d.real;
		int imaginary = this->imaginary - d.imaginary;

		return complex(real, imaginary);
	}

	complex operator*(complex &a){
		int real = (this->real * a.real) + ((this->imaginary*a.imaginary)*-1);
		int imaginary = (this->imaginary * a.real) + (this->real * a.imaginary);

		return complex(real, imaginary);
	}

	complex& operator++(){
	
		cout << "a" << endl;
		this->real++;
		return *this;
	}

	complex operator++(int){
		int real;
		real= this->real++;
		return complex(real, imaginary);

	}

	friend complex operator+(complex &c, complex &d);
	

};
complex operator+(complex &c,complex &d){
	int real = c.real + d.real;
	int imaginary = c.imaginary + d.imaginary;
	return complex(real, imaginary);
}

int main()
{
	complex a(3,5);
	a.PrintComplex();
	complex b(4, -7);
	b.PrintComplex();
	complex c(-2, 6);
	c.PrintComplex();
	complex d(-3, -4);
	d.PrintComplex();
	complex e(4, -1);
	e.PrintComplex();
	complex f(-3, 0);
	f.PrintComplex();
	complex g(0, -3);
	g.PrintComplex(); 
	complex h(0, 0);
	h.PrintComplex();
	complex i;

	complex j;
	j = a*b;
	


	
	
	cout << "====================================" << endl;
	a.PrintComplex();
	b.PrintComplex();
	i = a + b;
	i.PrintComplex();
	i = c - d;
	i.PrintComplex();

	cout << "=====================================" << endl;
	a.PrintComplex();
	b.PrintComplex();
	j.PrintComplex();
	j = c*d;
	j.PrintComplex();

	cout << "=====================================" << endl;
	complex k;
	k = a++;
	k.PrintComplex();
	a.PrintComplex();

	complex l;
	l = ++a;
	a.PrintComplex();
	l.PrintComplex();

	cout << "===================================" << endl;

	c.PrintComplex();
	d.PrintComplex();

	complex m;
	//m = c + d;
	//m = c.operator+(d);
	//m = operator+(c,d);
	m = c + d;
	m.PrintComplex();
	c.PrintComplex();
	d.PrintComplex();
	

	return 0;
}