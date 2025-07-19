#include<stdio.h>
int main()
{
	int n,original_num,rem,d,j=1,dec=0;
	printf("Enter the number in binary : ");
	scanf("%d",&n);
	
	original_num = n;

	while(n>0)
	{
		rem=n%10;
		d=rem*j;
		dec+=d;
		j*=2;
		n/=10;
	}
	printf("Binary number = %d,decimal number = %d\n",original_num,dec);
	return 0;
}
