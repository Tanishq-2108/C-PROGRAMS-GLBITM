#include<stdio.h>
int main()
{
    int n, s=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    printf("sum of natural number %d",s);
}