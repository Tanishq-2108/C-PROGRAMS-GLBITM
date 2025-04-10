#include<stdio.h>
int kthbit(int n,int k)
{
    if(n&(1<<(k-1)))
    printf("bit is set");
    else
    printf("bit is not set");
}
int main()
{
    int n,k;
    printf("enter a number");
    scanf("%d",&n);
    printf("enter the kth you want to check");
    scanf("%d",&k);
    kthbit(n,k);
}