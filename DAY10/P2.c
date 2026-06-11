#include<stdio.h>
int main()
{
    int i,j,num;
    printf(" enter the num =");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        printf("\n");
        for(j=1;j<=num-i;j++)
        {
            printf("  ");         
        }
        for(j=1;j<=(2*i-1);j++){
        printf(" * ");
    }
    printf("\n");
}
    return 0;
}