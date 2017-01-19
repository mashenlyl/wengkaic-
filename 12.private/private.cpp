/*
 * private.cpp
 *
 *  Created on: 2017年1月14日
 *      Author: LYL
 */

#include <iostream>
using namespace std;

// 先在这里声明一下，告诉编译器有这么一个类叫A，然后在后面再进行定义；
class A;

class B
{
public:
	// 这里还不能对A进行操作来，因为A还没有进行定义
	void f(A *p);
};

class A
{
private:
	int a;
public:
	A(int a){ this->a = a; };
	void f(A *p){ p->a = 10;};
	int print(){ return this->a; }
	friend class B;
	friend void B::f(A*);
	friend void h();
};

void h()
{
	cout << "h()" << endl;
}

void B::f(A *p)
{
	p->a = 10;
}

int main()
{
	A a(100);
	A b(30);
	a.f(&b);
	cout << "a.a" << a.print() << endl;
	cout << "b.a" << b.print() << endl;

	return 0;
}


