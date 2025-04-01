#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<i*n;k++)
            {
                printf(" ");
            }
            for(int l=0;l<=j;l++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}