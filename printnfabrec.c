#include<stdio.h>
int fab(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    return fab(n-1)+fab(n-2);
}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    n=fab(n);
    printf("%d",n);
}