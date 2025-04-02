#include<stdio.h>
int main()
{
    int c,n;
    printf("enter a number ");
    scanf("%d",&n);
    for(int j=1;j<=n; j++)
    {
        c=0;
        for(int i=1;i<=j;i++)
    {
        if(j%i==0)
        {
            c++;
        }
    }
    if(c==2)
    printf("\n%d is prime number",j);
    else
    printf("\n%d is not prime number",j);
    }
}