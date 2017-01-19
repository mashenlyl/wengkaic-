/*
 * initial_list.cpp
 *
 *  Created on: 2017年1月15日
 *      Author: LYL
 */

#include <iostream>
using namespace std;

class B
{
private:
	int a;
public:
	B(int){ this->a = a; };
};

class A
{
public:
	// 对应对象的初始化就必须使用初始化列表了，初始化列表的调用是在构造函数调用之前进行的
	A(int v, B d):c(d),a(v){};
private:
	B c;
	int a;
};

int main()
{
	B s(2);
	A a(2, s);

	return 0;
}


