/*
 * constructor.cpp
 *
 *  Created on: 2017��1��22��
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
	A a;  // �������ǵȼ۵�
	a.print();
	A b = a;  // ��ʵ����b(a)�����Ĺ��캯��A(const A& o)->�������캯��
	b.print();
}



