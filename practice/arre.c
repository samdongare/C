#include<stdio.h>

int main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		printf("%p ",arr+i);
		printf("%d\n",arr[i]);
	}
	printf("Enter 5 numbers\n");
	for(i=0;i<5;i++)
		scanf("%d",arr+i);
	for(i=0;i<5;i++)
	{
		printf("%d ",*(arr+i));
		printf("%p\n",arr+i);
	}
}
