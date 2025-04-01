#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of rows");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int t=n/2;
            if(i==0||j==0||i==n||j==n)
            {
                printf("%d",n-t);
            }
            else if(i==1||j==1||i==n||j==n)
            {
                printf("%d",n-t-1);
            }
            else{
                printf("%d",n-t-2);
            }
        }
        printf("\n");
    }
}