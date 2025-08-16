#include<stdio.h>
int main()
{
    int arr[5],i,sum = 0;
    for(i=0;i<5;i++)
    {
        printf("Enter a value of for arr[%d] : ",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum = %d\n",sum);
    return 0;
}