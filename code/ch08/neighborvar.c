//file : neighborvar.c

#include<stdio.h>

int main(void)
{
	int a = 1, b = 3, c = 6;


	printf("������ ���尪 �ּҰ�	\n");
	printf("---------------------------------\n");
	printf("	c	%d	%p\n", c, &c);
	printf("	b	%d	%p\n", b, &b);
	printf("	a	%d	%p\n", a, &a);


	int* p = &c;
	printf("	c	%d	%p\n", c, &c);
	printf("	b	%d	%p\n", b, &b);
	printf("	a	%d	%p\n", a, &a);



	return 0;
}