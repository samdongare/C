#include<stdio.h>
int main()
{
	int a,b,i;
	int result = 0;

	printf("Enter a two number to be multiplied : \n");
	scanf("%d%d",&a,&b);

	for(i=1;i<=b;i++)
	{
		result = result+a;
	}
	printf("%d * %d = %d\n",a,b,result);
	return 0;
}
