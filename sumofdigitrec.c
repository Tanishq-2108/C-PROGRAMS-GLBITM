#include<stdio.h>
int sumofdigit(int n)
{
    int ans;
    if(n==0)
    {
     return 0;
    }
    else
    {
    ans=(n%10 +sumofdigit(n/10));
    }
    return ans;
}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    n=sumofdigit(n);
    printf("sum of digit %d",n);
}