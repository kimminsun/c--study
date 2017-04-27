#include<iostream>
using namespace std;

class Shape{
protected:
	int x, y;
	int width, height;

public:
	Shape(){
		cout << "도형의 기본 생성자" << endl;
		x = y = width = height = 0;
	}
	Shape(int x, int y, int width, int height){
		cout << "도형의 매개변수 있는 생성자" << endl;
		this->x = x;
		this->y = y;
		this->width = width;
		this->height = height;

	}
	virtual~Shape(){
		cout << "도형 소멸자" << endl;
	};

/*	virtual void Draw(){
		cout << "도형을 그립니다." << endl;
		cout << x << "," << y << "," << width << "," << height << endl;
	}*/
};
class Rectangle:public Shape{
	
	int k;

public:
	Rectangle(){
		k = 10;
		cout << "사각형의 기본 생성자" << endl;
		
	}
	Rectangle(int x,int y,int width,int height):Shape(x, y,width,height){
		k = 100;
		cout << "사각형의 매개변수 있는 생성자" << endl;
		

	}
	~Rectangle(){
		cout << k << endl;
		cout << "사각형 소멸자" << endl;
	
	};

	void Draw(){
		cout << "사각형을 그립니다." << endl;
		cout << x << "," << y << "," << width << "," << height<<endl;
	}
};
class Ellipse:public Shape{

public:
	Ellipse(){
		cout << "타원의 기본 생성자" << endl;
		
	}
	Ellipse(int x, int y, int width, int height){
		cout << "타의 매개변수 있는 생성자" << endl;
	

	}
	~Ellipse(){
		cout << "타원 소멸자" << endl;
	};

	void Draw(){
		cout << "타원을 그립니다." << endl;
		cout << x << "," << y << "," << width << "," << height << endl;
	}
};
class Triangle:public Shape{

public:
	Triangle(){
		cout << "삼각형의 기본 생성자" << endl;
		
	}
	Triangle(int x, int y, int width, int height){
		cout << "삼각형의 매개변수 있는 생성자" << endl;
		

	}
	~Triangle(){
		cout << "삼각형 소멸자" << endl;
	};

	void Draw(){
		cout << "삼각형을 그립니다." << endl;
		cout << x << "," << y << "," << width << "," << height << endl;
	}
};

int main()
{
	/*Rectangle r1;r1.Draw();
	Rectangle r2(1,2,3,4);	r2.Draw();
	

	Ellipse e1;e1.Draw();
	Ellipse e2(5,6,7,8); e2.Draw();

	Triangle t1; t1.Draw();
	Triangle t2(9, 10, 11, 12); t2.Draw();

	cout<<sizeof(Shape)<<endl;
	cout << sizeof(Rectangle) << endl;*/

	/*Rectangle *pRect = 0;

	pRect = new Rectangle(10, 10, 100, 100);
	pRect->Draw();
	((Shape*)pRect)->Draw();
	delete pRect;

	//Shape *a = new Rectangle(10,20,30,40);
	//a->Draw();
	//delete a;

	cout << "=======================================" << endl;


	Shape *c = new Shape(11, 12, 13, 14);
	((Rectangle*)c)->Draw();
	c->Draw();
	delete c;

	//Rectangle *b = new Shape();



	system("PAUSE");*/

	Shape* shapes[6];

	cout << "\n생성자를 호출합니다" << endl;

	shapes[0] = new Rectangle();
	shapes[1] = new Rectangle(10, 10, 100, 100);

	shapes[2] = new Ellipse();
	shapes[3] = new Ellipse(10,10,100,100);

	shapes[4] = new Triangle();
	shapes[5] = new Triangle(10, 10, 100, 100);

	cout << "\n도형을 그립니다" << endl;
	for (int i = 0; i < 6; i++){
		shapes[i]->Draw();
	}

	cout << "\n소멸자를 호출합니다" << endl;
	for (int i = 0; i < 6; i++){
		delete shapes[i];
	}


	
	
	return 0;
}
