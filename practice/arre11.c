#include<stdio.h>

int main()
{
	int i,arr[5]={30,35,40,45,50},*p;
	p=&arr[4];

	for(i=0;i<5;i++)
		printf("%d\t%d\t",*(p-i),p[i]);
	return 0;
}
