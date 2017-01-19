/*
 * inherit.cpp
 *
 *  Created on: 2017��1��15��
 *      Author: LYL
 */

#include <iostream>
using namespace std;

class A
{
public:
	A(int):i(2){ cout << "A::A" << endl; };
	~A(){ cout << "A����~A" << endl;};
	void print1(){ cout << "A::print() " << i << endl; };
	void print(int a) { cout << "A::print(lint) " << i << endl; };
protected:
	void set(int a) { i=a; };
private:
	int i;
};

class B: public A
{
private:
public:
	void f();
	B(int):A(1){ cout << "B::B" << endl; };
	void print(int a, int b){ cout << "B::print()" << endl; };
	~B(){ cout << "B::~B" << endl; };
};

int main()
{
	B c(1);
	//c.set(23);
	c.print(2, 3);
	c.A::print(2);

	return 0;
}


