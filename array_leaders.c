#include<stdio.h>
int leaders(int arr[],int n)
{
    int temp[20];
    int l=0;
    for(int i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp[l]=arr[i];
            }
        }
    }
    for
    printf("%d",temp);
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
    leaders(arr,n);
}