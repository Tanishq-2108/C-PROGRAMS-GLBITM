#include<stdio.h>
int poweroftwo(int n)
{
    if((n&(n-1))==0)
    printf("it is power of two");
    else
    printf("it is not power of two");
}
int main()
{
    int n,k;
    printf("enter a number");
    scanf("%d",&n);
    poweroftwo(n);
}