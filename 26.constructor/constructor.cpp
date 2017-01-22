/*
 * constructor.cpp
 *
 *  Created on: 2017年1月22日
 *      Author: LYL
 */
#include <iostream>
#include <stdio.h>
using namespace std;

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
};

int main(void)
{
	A a;  // 这两个是等价的
	a.print();
	A b = a;  // 其实就是b(a)；它的构造函数A(const A& o)->拷贝构造函数
	b.print();
}



