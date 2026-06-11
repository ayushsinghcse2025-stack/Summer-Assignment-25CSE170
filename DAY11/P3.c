#include<stdio.h>
int is_prime(int n);
int main()
{
int num;
printf(" enter the num =");
scanf("%d",&num);
if(is_prime(num))
{
    printf("%dis a prime no\n",num);
}
else 
{
    printf("%dis not a prime no.\n",num);
}
return 0;
}
int is_prime(int n)
{
if(n<=1)
{
   return 0; 
}
for (int i=2;i<=n/2;i++)
{
    if (n%i == 0){
        return 0;
    }
}
    return 1;
}