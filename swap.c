#include<stdio.h>

int main(){

int a,b,temp=0;

printf("enter the numbers\n");
scanf("%d %d",&a,&b);

printf("before swapping a=%d b=%d\n",a,b);

temp=a^b;
a=temp^a;
b=temp^b;

printf("after swapping a=%d b=%d\n",a,b);

return 0;

}
