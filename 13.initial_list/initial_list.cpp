/*
 * initial_list.cpp
 *
 *  Created on: 2017��1��15��
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
	// ��Ӧ����ĳ�ʼ���ͱ���ʹ�ó�ʼ���б��ˣ���ʼ���б��ĵ������ڹ��캯������֮ǰ���е�
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

