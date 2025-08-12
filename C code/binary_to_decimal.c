#include<stdio.h>
int main()
{
	int n,num,rem,d,j=1,dec=0;
	printf("Enter the number in Binary : ");
	scanf("%d",&n);
	num = n;
	
	while(n>0)
	{
		rem = n%10;
		d = rem*j;
		dec += d;
		j *= 2;
		n/=10;
	}
	
	printf("Binary number = %d, Decimal number = %d\n",num,dec);
	return 0;
}
