#include<stdio.h>
int main()
{
	int num,prod=1,rem;
	printf("Enter a number : ");
	scanf("%d",&num);

	while(num>0)
	{
		rem = num%10;
		prod *= rem;
		num/=10;
	}
	printf("Product of digits = %d\n",prod);
	return 0;
}
