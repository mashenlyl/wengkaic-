/*
 * Pointc.c
 *
 *  Created on: 2017��1��13��
 *      Author: LYL
 */
#include <stdio.h>

// ©��typedef
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

// ���������������������������̵�����
// c++�Ǹ��������ݺͷ��񶼰�����һ�����У�����һ�������У�
// ��c���������ֻ�����ݰ����ڽṹ���У�����������Ƿֿ���
int main(void)
{
	Pointed a;
	a.x = 10;
	a.y = 20;
	a.z = 30;
	print(&a);
	return 0;
}



