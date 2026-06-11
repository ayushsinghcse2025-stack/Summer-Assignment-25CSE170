#include<stdio.h>
int main()
{
int maximum(int a,int b);
int a,b,maxvalue;
printf(" enter the value of a =");
scanf("%d",&a);
printf(" enter the value of b =");
scanf("%d",&b);
maxvalue=maximum(a,b);
printf(" the maximum value is%d\n",maxvalue);
    return 0;
}
int maximum(int a,int b)
{
    if( a>b){
        return a;
    }
    else{
        return b;
    
    }
}