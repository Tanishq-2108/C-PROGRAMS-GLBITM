#include<stdio.h>
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    if(n>0)
    printf("number is positive\n");
    else if(n == 0)
    printf("number is zero\n");
    else
    printf("number is negative\n");
}