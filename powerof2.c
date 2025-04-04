#include<stdio.h>
int power(int n)
{
    int ans;
    if(n==0)
    return 1;
    else
    {
        ans=(2*power(n-1));
    }
    return ans;
}
int main()
{
    int n;
    printf("enter a power of 2 you want to known ");
    scanf("%d",&n);
    n=power(n);
    printf("power of 2 is %d",n);
}