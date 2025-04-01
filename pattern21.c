#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=0;k<n-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    for(int i=1;i<=n;i++)
    {
        for(int k=0;k<n-i;k++)
        {
            printf(" ");
        }
        for(int j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        
    }
    }
}