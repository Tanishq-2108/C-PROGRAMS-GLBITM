#include<stdio.h>
int ton(int n,int curr)
{
    if(curr>n)
    {
      return curr;
    }
    else 
    {
        printf("%d",curr);
        return ton(n,curr+1);
    }
}
int main()
{
    int n,curr=1;
    printf("enter a number ");
    scanf("%d",&n);
    ton(n,curr);
}