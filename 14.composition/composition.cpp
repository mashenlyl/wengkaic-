/*
 * composition.cpp
 *
 *  Created on: 2017��1��15��
 *      Author: LYL
 */

#include <iostream>
using namespace std;

class Person
{
public:
	Person(int) {};
};
class Balance
{
public:
	Balance(int) {};
};

class SavingAccout
{
public:
	SavingAccout(): m_saver(1), m_balance(2) {};
private:
	Person m_saver;
	Balance m_balance;
};

int main()
{
	SavingAccout S;

	return 0;
}


