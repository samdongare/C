#include<stdio.h>
void factors(int num);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    factors(num);
    return 0;
}
void factors(int num)
{
    int i=2;
    if(num==1)
        return;
    while(num%i!=0)
        i++;
    printf("%d ",i);
    factors(num/i);
}