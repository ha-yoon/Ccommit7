#include <stdio.h>

typedef struct {
	int data1;
	int data2;
	int data3;
}Data;

int main()
{



	Data d; 
	Data* pd;

	pd = &d;

	printf("d��ũ�� : %d\n", sizeof(d));
	printf("pd��ũ�� : %d\n", sizeof(pd));

	printf("\npd�� ��: %p\n", pd);


	return 0;
}