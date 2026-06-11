#include<stdio.h>
int factorial(int n);
int main()
{
    int num;
    printf(" enter the num =");
    scanf("%d",&num);
    printf("factorial =%d\n",factorial(num));
    return 0;
}
    int factorial(int n)
    {
        int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}