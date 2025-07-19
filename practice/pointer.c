#include<stdio.h>

int main()
{
	int a=9;
	char name = 'A';

	//char *ptr=&a;
	int *ptr1 = &a;
	int *ptr = NULL;
	printf("%d\n",*ptr1);
	printf("%p\n",&a);
	printf("%p\n",ptr);
	printf("%d\n",*ptr1);
	return 0;
}
