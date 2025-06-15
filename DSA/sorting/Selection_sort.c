#include<stdio.h>
#define MAX_SIZE 10

void sort(int arr[]);
int main()
{
	int arr[MAX_SIZE];

	printf("Enter an Value Of array\n");
	for(int i=0;i<MAX_SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}

	sort(arr);
	for(int i=0;i<MAX_SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void sort(int arr[])
{
	int i,j,min_idx;

	for(i=0;i<MAX_SIZE-1;i++)
	{
		min_idx=i;
		for(j=i+1;j<MAX_SIZE;j++)
		{
			if(arr[j]<arr[min_idx])
			{
				min_idx=j;
			}
		}

		if(min_idx!=i)
		{
			int temp=arr[i];
			arr[i]=arr[min_idx];
			arr[min_idx]=temp;
		}

	}

}
