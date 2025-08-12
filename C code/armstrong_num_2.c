#include<stdio.h>
#include<math.h>
int main()
{
	int num,n,rem,sum=0,count = 0;
	printf("Enter a number : ");
	scanf("%d",&n);
	num = n;
	
	while(n>0)
	{
		n/=10;
		count++;
	}
	n=num;
	
	while(n>0)
	{
		rem = n%10;
		int temp=1;
		
		for(int i=0;i<count;i++)
		{
			temp *= rem;
		}
		sum += temp;
		
		n/=10;
	}
	if(sum==num)
		printf("%d is armstrong number\n",num);
	else
		printf("%d is not a armstrong number\n",num);
		
	return 0;	
	
}
