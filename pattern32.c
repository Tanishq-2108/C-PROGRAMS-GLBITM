#include<stdio.h>
int main()
{
    int n,t;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++)
    {
        if(i<=(2*n-1)/2)
        {
            for(int k=0;k<n-i-1;k++)
            {
                printf(" ");
            }
            for(int j=0;j<n-i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(int k=0;k<i-n+1;k++)
            {
                printf(" ");
            }
            for(int j=0;j<i-3;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}