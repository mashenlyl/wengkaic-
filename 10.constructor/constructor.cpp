/*
 * constructor.cpp
 *
 *  Created on: 2017年1月14日
 *      Author: LYL
 */

#include <iostream>
using namespace std;

class A
{
public:
	A();
	int a;
};

A::A()
{
	//a = i;
	cout << "A::A()" << a << endl;
}

int main(void)
{
	A a();
	goto jump1;
	// 这里这样写就跳过了初始化aa了，对象aa是在进入main这个大括号之后就分配了空间的，但是初始化要等到下面这里才进行
	// 如果使用了goto来跳过了这一行的话，就会出错了；
	A aa();

	jump1:
		cout<<"jump1"<<endl;

	return 0;
}


