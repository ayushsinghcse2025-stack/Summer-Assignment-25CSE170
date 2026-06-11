#include<stdio.h>
int main()
{
    int i,j,num;
    printf(" enter the num =");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("\n");
        for(j=1;j<=num-i;j++)
        {
            printf("  ");         
        }
        for(j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
}
    return 0;
}