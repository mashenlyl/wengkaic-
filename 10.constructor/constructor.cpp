/*
 * constructor.cpp
 *
 *  Created on: 2017��1��14��
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
	// ��������д�������˳�ʼ��aa�ˣ�����aa���ڽ���main���������֮��ͷ����˿ռ�ģ����ǳ�ʼ��Ҫ�ȵ���������Ž���
	// ���ʹ����goto����������һ�еĻ����ͻ�����ˣ�
	A aa();

	jump1:
		cout<<"jump1"<<endl;

	return 0;
}

