/*
 * template.cpp
 *
 *  Created on: 2017年1月23日
 *      Author: LYL
 */
#include <iostream>
using namespace std;

// swap与std中的swap重名了，要用swap1才可以
template < class T >
void swap1( T& x, T& y){
	T temp = x;
	x = y;
	y = temp;
}

template < class T >
void foo(){
	T temp;
}

template <class T>
class Vetor {
public:
	Vetor(int size);
	Vetor(const Vetor&){};
	T& operator[](int){};
private:
	T* m_elements;
	int m_size;
};
template <class T>
Vetor<T>::Vetor(int size):m_size(size){
	m_elements = new T[m_size];
}
int main(){
	Vetor<int> v1(100);
	Vetor<float> v2(200);
	v1[3] = 2;
	v2[5] = v1[3];		// 可以进行赋值int -> float

	foo<int>();
	int i = 3, j = 4;
	swap1<int>(i, j);
	float a = 4.0, b = 5.0;
	swap1<float>(a, b);

	return 0;
}



