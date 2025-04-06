#include<stdio.h>
int leftrotate(int arr[],int n,int d)
{
    int temp[20];
    int t=d;
    for(int i=0;i<n;i++)
    {
        if(d>0)
        {
            temp[n-d]=arr[i];
            d--;
        }
        else
        {
            temp[i-t]=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",temp[i]);
    }
}
int main()
{
    int arr[20],n,d;
    printf("enter size of an array\n");
    scanf("%d",&n);
    printf("enter the number of position you wnat to left rotate");
    scanf("%d",&d);
    printf("enter an array\n\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i],d);
    }
    leftrotate(arr,n,d);
}