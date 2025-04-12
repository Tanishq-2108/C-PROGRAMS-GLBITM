#include<stdio.h>
int snake(int arr[][20],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i%2==0)
            printf(" %d",arr[i][j]);
            else
            {
                printf(" %d",arr[i][r-1-j]);
            }
        }
    }
}
int main()
{
    int r,c,arr[20][20];
    printf("enter the number of rows");
    scanf("%d",&r);
    printf("enter the number of column ");
    scanf("%d",&c);
    printf("lets enter elements \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    snake(arr,r,c);
}