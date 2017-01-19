/*
 * upcasting.cpp
 *
 *  Created on: 2017��1��16��
 *      Author: LYL
 */
#include <iostream>
using namespace std;

class Person
{
public:
	Person(int h, int y):height(h),year(y){}
	void print(int a){ cout << "Person::print(int a)" << endl; }
	void print(){ cout << "Person::print" << endl; }
private:
	int height;
	int year;
};

class Student:public Person
{
public:
	Student():Person(20, 30),grade(100){}
	void print(){ cout << "Student::print" << endl; };
private:
	int grade;
};

struct A
{
	const int a;
	const int b;
	int c;
};
void func(struct A *p)
{
	int *p1 = (int *)p;
	*p1 = 10;
	p1++;
	*p1 = 20;
	p1++;
	*p1 = 30;
}
int main()
{
	struct A a = {1, 2 ,3};
	func(&a);
	cout << a.a << " " << a.b << " " << a.c <<endl;

/*
	const Student p;
	int *p1 = (int *)&p;
	cout << p1 << endl;
	cout << *p1 << endl;		// height = 20
	p1++;
	cout << *p1 << endl;		// year = 30
	p1++;
	cout << *p1 << endl;		// grade = 100

	//Person *s = &p;
	//s->print();

*/
/*
	Student p;
	Person s2 = p;
	Person *s = &p;
	Person &s1 = p;

	s2.print(10);
	s1.print();
	s->print();
*/
	return 0;
}



