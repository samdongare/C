#include<stdio.h>
int main()
{
	int x,y,quo,rem;
	printf("Enter two numbers : \n");
	scanf("%d%d",&x,&y);

	if(y)     //if y is non zero
	{
		quo = x/y;
		rem = x%y;

		printf("Quotient = %d\nRemainder = %d\n",quo,rem);
	}
	else
		printf("Divide by zero error\n");
	return 0;
}
