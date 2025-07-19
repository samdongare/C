#include<stdio.h>
int main()
{
	long num;
	int dig,sum;
	printf("Enter a number : ");
	scanf("%ld",&num);
	printf("%ld->",num);

	do
	{
		sum=0;
		while(num!=0)
		{
			dig=num%10;
			sum+=dig;
			num/=10;
		}
		printf("%d->",sum);
		num=sum;
	}while(num/10!=0);   // while num is more than one digit
	printf("\n");
	return 0;
}
