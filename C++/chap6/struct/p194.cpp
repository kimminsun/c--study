#include<iostream>
using namespace std;

class Shape{
protected:
	int x, y;
	int width, height;

public:
	Shape(){
		cout << "������ �⺻ ������" << endl;
		x = y = width = height = 0;
	}
	Shape(int x, int y, int width, int height){
		cout << "������ �Ű����� �ִ� ������" << endl;
		this->x = x;
		this->y = y;
		this->width = width;
		this->height = height;

	}
	virtual~Shape(){
		cout << "���� �Ҹ���" << endl;
	};

/*	virtual void Draw(){
		cout << "������ �׸��ϴ�." << endl;
		cout << x << "," << y << "," << width << "," << height << endl;
	}*/
};
class Rectangle:public Shape{
	
	int k;

public:
	Rectangle(){
		k = 10;
		cout << "�簢���� �⺻ ������" << endl;
		
	}
	Rectangle(int x,int y,int width,int height):Shape(x, y,width,height){
		k = 100;
		cout << "�簢���� �Ű����� �ִ� ������" << endl;
		

	}
	~Rectangle(){
		cout << k << endl;
		cout << "�簢�� �Ҹ���" << endl;
	
	};

	void Draw(){
		cout << "�簢���� �׸��ϴ�." << endl;
		cout << x << "," << y << "," << width << "," << height<<endl;
	}
};
class Ellipse:public Shape{

public:
	Ellipse(){
		cout << "Ÿ���� �⺻ ������" << endl;
		
	}
	Ellipse(int x, int y, int width, int height){
		cout << "Ÿ�� �Ű����� �ִ� ������" << endl;
	

	}
	~Ellipse(){
		cout << "Ÿ�� �Ҹ���" << endl;
	};

	void Draw(){
		cout << "Ÿ���� �׸��ϴ�." << endl;
		cout << x << "," << y << "," << width << "," << height << endl;
	}
};
class Triangle:public Shape{

public:
	Triangle(){
		cout << "�ﰢ���� �⺻ ������" << endl;
		
	}
	Triangle(int x, int y, int width, int height){
		cout << "�ﰢ���� �Ű����� �ִ� ������" << endl;
		

	}
	~Triangle(){
		cout << "�ﰢ�� �Ҹ���" << endl;
	};

	void Draw(){
		cout << "�ﰢ���� �׸��ϴ�." << endl;
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

	cout << "\n�����ڸ� ȣ���մϴ�" << endl;

	shapes[0] = new Rectangle();
	shapes[1] = new Rectangle(10, 10, 100, 100);

	shapes[2] = new Ellipse();
	shapes[3] = new Ellipse(10,10,100,100);

	shapes[4] = new Triangle();
	shapes[5] = new Triangle(10, 10, 100, 100);

	cout << "\n������ �׸��ϴ�" << endl;
	for (int i = 0; i < 6; i++){
		shapes[i]->Draw();
	}

	cout << "\n�Ҹ��ڸ� ȣ���մϴ�" << endl;
	for (int i = 0; i < 6; i++){
		delete shapes[i];
	}


	
	
	return 0;
}
