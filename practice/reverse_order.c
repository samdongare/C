#include<stdio.h>
int main()
{
	int k;
	printf("Enter a number : ");
	scanf("%d",&k);
	printf("\n");
	while(k>=0)
	{
		printf("%d\t",k);
		k-=2;
	}

	printf("\n");
	return 0;
}
