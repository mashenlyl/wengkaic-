/*
 * private.cpp
 *
 *  Created on: 2017��1��14��
 *      Author: LYL
 */

#include <iostream>
using namespace std;

// ������������һ�£����߱���������ôһ�����A��Ȼ���ں����ٽ��ж��壻
class A;

class B
{
public:
	// ���ﻹ���ܶ�A���в���������ΪA��û�н��ж���
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

