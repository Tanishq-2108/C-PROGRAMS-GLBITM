#include<stdio.h>
int main()
{
    int n;
    printf("enter number of row");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int k=0; k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            if(j%2 != 0)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}