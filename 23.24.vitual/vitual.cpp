/*
 * vitual.cpp
 *
 *  Created on: 2017年1月16日
 *      Author: LYL
 */
#include <iostream>
using namespace std;

class Shape
{
public:
	virtual Shape *newkk(){ cout << "Shape::newkk(int a)" << endl; }
	virtual Shape &newk(){ cout << "Shape::newk(int a)" << endl; }
	virtual Shape newh(){}
	void move(){ cout << "Shape::move()" << endl;};
	virtual void render(){ cout << "Shape::render()" << endl; };
	// 如果下面的子类没有render（int a）的话，这函数就被隐藏了
	virtual void render(int a){ cout << "Shape::render(int)" << endl; }
	virtual ~Shape(){};
private:
	int center;
};

class Rectangle:public Shape
{
public:
	virtual void render(){ cout << "Rectangle::render()" << endl; };
};

class Ellipse:public Shape
{
public:
	virtual Shape *newkk(){ cout << "Ellipse::newkk(int a)" << endl; }
	virtual Ellipse &newk(){ cout << "Ellipse::newk(int a)" << endl; }
	virtual Shape newh(){}
	// 这里后面没有加上大括号，就只是在这里是声明，并没有定义这个构造函数
	Ellipse(float maj, float minr){};
	virtual void render(){ cout << "Ellipse::render(int a)" << endl; };
	//virtual void lender(int a){ cout << "Ellipse::render(int)" << endl; }
	virtual ~Ellipse(){};
};

class Circle:public Ellipse
{
public:
	Circle(float radiums):Ellipse(radiums, radiums){};
	void render(){ cout << "Circle::render(int a, int b)" << endl; };
	//virtual void render(int a){ cout << "Circle::render(int)" << endl; }
};

void render(Shape* p)
{
	p->render();
	p->render(2);
	p->newkk();
	p->newk();
	//p->lender(2);
	p->move();
}
int main()
{

	Shape S;
	cout << sizeof(S) << endl;
	Ellipse ell(10,20);
	Ellipse *p1;

	//Shape * p = p1;
	// 这里只是赋值
	//S = ell;
	// 这里把vtable的值给改变了
	//int *r = (int *)&S;
	//int *t = (int *)&ell;
	//*r = *t;
	//p->render();

	ell.render();
	Circle circ(13);
	circ.render();
	render(&ell);
	render(&circ);

	return 0;
}


