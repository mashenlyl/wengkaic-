/*
 * static.cpp
 *
 *  Created on: 2017��1��22��
 *      Author: LYL
 */
#include <iostream>
using namespace std;

int func(int a, int b);

class A{
public:
	A():j(3){ cout << "A()" << endl;}
	static void f(int ii){ cout << i << endl; }
	~A(){ cout << "~A()" << endl;}
private:
	int j;
	static int i;
};

int A::i;

// �Ƚ���ȫ���������ĳ�ʼ��������Ȼ���ٽ���main����
int c;

int main()
{
	if(2 > 3)
	{
		A b;
	}
	cout << "main()" << endl;
	A b;
	A::f(2);

	return 0;
}

int func(int a, int b)
{
	cout << "func(int, int)" << endl;
	return a+b;
}

