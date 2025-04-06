#include<stdio.h>
int moveallzero(int arr[],int n)
{
    int temp[20],t=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp[t]=arr[i];
            t++;
        }
    }
    for(int i=0;i<t;i++)
    {
        printf("%d ",temp[i]);
    }
}
int main()
{
    int arr[20],n;
    printf("enter size of an array\n");
    scanf("%d",&n);
    printf("enter an array\n\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    moveallzero(arr,n);
}