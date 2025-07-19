#include<stdio.h>
int main()
{
	int n,sum=0,term=1;
	printf("Enter numbers of terms : ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		sum+=term;
		term = term+i;
	}

	printf("The sum series upto %d terms is %d\n",n,sum);
	return 0;
}
