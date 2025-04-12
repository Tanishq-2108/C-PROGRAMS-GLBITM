#include<stdio.h>
int transpose(int arr[][20],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0||j==0||i==r-1||j==c-1)
            {
                printf("%d",arr[i][j]);
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
    transpose(arr,r,c);
}