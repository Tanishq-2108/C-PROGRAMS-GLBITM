#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for(int j=1; j<=n-i+1;j++)
        {
            printf("%d",j);
        }
        for(int l=n-i;l>0;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}
