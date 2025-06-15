#include<stdio.h>
#define SIZE 10
int search(int arr[]);
int main()
{
	int arr[SIZE];
	int result;
	printf("Enter a values \n");
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	result=search(arr);

	if(result>0)
		printf("Element is found at index %d\n",result);
	else
		printf("Element is not found\n");
}

int search(int arr[])
{
	int left=1;
	int right=SIZE;
	int mid=0;
	int ele;
	printf("Enter an ele to search\n");
	scanf("%d",&ele);

	while(left<=right)
	{
		mid=(left+right)/2;

		if(ele==arr[mid])
			return mid;

		if(ele<arr[mid])
			right=mid-1;

		else
			left=mid+1;
	}
	return -1;
}
