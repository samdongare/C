#include<stdio.h>
int fib(int n);
int main()
{
    int terms;
    printf("Enter number of terms : ");
    scanf("%d",&terms);
    
    for(int i=0;i<terms;i++)
        printf("%d ",fib(i));
    
    printf("\n");
    return 0;
}
int fib(int n)
{
    if(n==0 || n==1)
        return 1;
    return (fib(n-1) + fib(n-2));
}