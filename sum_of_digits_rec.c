#include<stdio.h>
int sum(int n)
{
    if(n==0)
    return 0;
    else
    return n+sum(n-1);
}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    n=sum(n);
    printf("%d is sum ",n);
}