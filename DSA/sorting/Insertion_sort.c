#include<stdio.h>
#define SIZE 10
void sort(int arr[]);
int main()
{
	int arr[SIZE];
	printf("Enter the elemenst of array \n");
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}

	sort(arr);
	printf("sorted array : \n");
	for(int i=0;i<SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void sort(int arr[])
{
	int key,i,j;

	for(i=1;i<SIZE;i++)
	{
		key=arr[i];
		j=i-1;

		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
