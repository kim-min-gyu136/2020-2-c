//file : dereference.c

#include<stdio.h>

int main(void)
{
	int data = 100;
	char ch = 'A';
	int* ptrint = &data;
	char* ptchar = &ch;
	printf("�������� ���: %d %c\n", *ptrint, *ptchar);

	*ptrint = 200;	//���� data�� *ptrint�� ���������Ͽ� �� ������ ����
	*ptchar = 'B';	//���� ch�� *ptrchar�� ���������Ͽ� �� ������ ����
	printf("�������� ��� : %d %c\n", data, ch);

	return 0;
}