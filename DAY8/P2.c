#include<stdio.h>
int main()
{
    int i,j,num,n=1;
    printf(" enter the num");
    scanf("%d",&num);
    for ( i =1;i<=num;i++)
    {
        for ( j=1;j<=i;j++)
        {
            printf("n");
            n=n+1;
        }
        printf("\n");
    }
    return 0;
}