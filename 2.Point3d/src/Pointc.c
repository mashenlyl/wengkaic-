/*
 * Pointc.c
 *
 *  Created on: 2017年1月13日
 *      Author: LYL
 */
#include <stdio.h>

// 漏了typedef
typedef struct Point3d
{
	float x;
	float y;
	float z;
}Pointed;

void print(Pointed *a)
{
	printf("x = %f\n", a->x);
	printf("x = %f\n", a->y);
	printf("x = %f\n", a->z);
}

// 两个程序表明了面向对象和面向过程的区别
// c++那个程序数据和服务都包含在一个类中，就是一个对象中；
// 而c的这个程序，只有数据包含在结构体中，服务和数据是分开的
int main(void)
{
	Pointed a;
	a.x = 10;
	a.y = 20;
	a.z = 30;
	print(&a);
	return 0;
}



