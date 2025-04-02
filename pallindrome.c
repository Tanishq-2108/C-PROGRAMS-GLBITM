#include<stdio.h>
int main()
{
    int s=0,n,t,p;
    printf("enter a number");
    scanf("%d",&p);
    n=p;
    while(n>0)
    {
       t=n%10;
       s=s*10+t;
       n=n/10;
    }
    if(p==s)
    printf("it is pallindrome");
    else
    printf("it is not pallindrome");
}