#include<stdio.h>
#define SIZE 10

void sort(int arr[]);
void swap(int *a,int *b);
int main()
{
	int arr[SIZE];

	printf("Enter an Elements of array\n");
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}

	sort(arr);

	for(int i=0;i<SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void sort(int arr[])
{
	int i,j;

	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
