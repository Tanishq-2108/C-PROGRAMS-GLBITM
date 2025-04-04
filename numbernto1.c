#include<stdio.h>
int ton(int n)
{
    if(n==0)
    {
      return 0;
    }
    else 
    {
        printf("%d",n);
        return ton(n-1);
    }
}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    ton(n);
}