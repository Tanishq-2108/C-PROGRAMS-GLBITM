#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=1; j<=i;j++)
        {
            printf("%d",j);
        }
        for(int l=i-1;l>=1;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}