#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char c='A';
        for(int j=0;j<n-i;j++)
        {
            printf("%c",c+j);
        }
        for(int k=0;k<i;k++)
        {
            printf(" ");
        }
        for(int l=i-1;l>0;l--)
        {
            printf(" ");
        }
        c='A';
        for(int m=n-i-1;m>=0;m--)
        {
            if(m==n-1)
            m=m-1;
            printf("%c",c+m);
        }       
        printf("\n");
    }
}