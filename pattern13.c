#include<stdio.h>
int main()
{
    int n;
    printf("enter number of row");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int k=0;k<i;k++)
        {
            printf(" ");
        }
        for(int j=n-i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}