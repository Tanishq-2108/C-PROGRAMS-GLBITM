#include<stdio.h>
int main()
{
    int n;
    printf("eneter a number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*n-(2*i-1);j++)
        {
            if(j==1||j==2*n-(2*i-1)||i==1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}