/*
 * reference.cpp
 *
 *  Created on: 2017��1��16��
 *      Author: LYL
 */
#include <iostream>
using namespace std;

class A
{
public:
	// ע�⹹�캯����������Ҫ���������͵Ĳ�������int���͵����𲻵����õ�Ч���ģ�����Ҳ���ᱨ���������a�ͱ����x�����õ�
	// A(int x):a(x){ a = 400; cout << "A::A()" << x << endl; };
	// �����a��������s�������ˣ����ԣ�һ��Ҫע�⣻
	A(int &x):a(x){ a = 400; cout << "A::A()" << x << endl; };
	void set(int value){ a = value; cout << a << endl; };
private:
	int &a;

};

void func(int &c){}
void func(int c){}

int main()
{
	int *x1;

	// û���������͵�ָ�룬���Ծ�û������������,Ҳ�Ͳ�֪�����ñ����ĵ�ַ��
	int &ff[3];
	int &* p;
	int *& p1 = x1;		// ��ָ�����͵�����

	int x = 10;
	int y = 30;
	int &d = x;
	int &f = y;
	d = f;
	cout << d << endl;

	int s = 10;
	A a(s);
	void func(int &a);
	func(s*3);
	a.set(80);
	cout << s << endl;

	return 0;
}
