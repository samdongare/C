#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers : \n");
	scanf("%d%d",&a,&b);

	if(a>b)
		printf("Bigger number is %d\n",a);
	else
		printf("Bigger number is %d\n",b);

	return 0;
}
