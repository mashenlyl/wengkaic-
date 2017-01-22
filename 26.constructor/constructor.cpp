/*
 * constructor.cpp
 *
 *  Created on: 2017年1月22日
 *      Author: LYL
 */
#include <iostream>
#include <stdio.h>
using namespace std;

class B
{
private:
	int a;
};

class A
{
public:
	A():a(2),b(5),c(&a){}
	//A(const A&o){ this->a = o.a; }
	void print(){ cout << a << endl; cout << b << endl; printf("c = %p\n", c); }

private:
	int a;
	int b;
	int *c;
	//A(const B&o){ this->a = o.a; }
};

int main(void)
{
	//int ff(10);

	//B dd;
	A a;  // 这两个是等价的
	a.print();
	A b(a);  // 其实就是b(a)；它的构造函数A(const A& o)->拷贝构造函数
	b.print();
}



