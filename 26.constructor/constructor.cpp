/*
 * constructor.cpp
 *
 *  Created on: 2017��1��22��
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
	A a;  // �������ǵȼ۵�
	a.print();
	A b(a);  // ��ʵ����b(a)�����Ĺ��캯��A(const A& o)->�������캯��
	b.print();
}



