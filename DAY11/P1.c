#include<stdio.h>
int main()
{
int add(int a,int b);
int a,b,sum;
printf(" enter the value of a =");
scanf("%d",&a);
printf(" enter the value of b =");
scanf("%d",&b);
sum=add(a,b);
return 0;
}
int add(int a,int b)

{
    printf("%d",a+b);
    return 0;
}