#include<stdio.h>

int main()
{
	int i,size=5,arr[5]={1};

//	for(i=0;i<size;i++)
//		scanf("%d",&arr[i]);
	int age = 23;
	printf("%d\n",&age);
	printf("%p\n",&age);
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);

	return 0;
}
