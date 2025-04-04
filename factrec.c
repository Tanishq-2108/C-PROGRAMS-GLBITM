#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    n=fact(n);
    printf("%d is factorial value",n);
}