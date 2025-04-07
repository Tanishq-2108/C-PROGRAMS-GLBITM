#include<stdio.h>
int sorted(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        return 1;
    }
    return 0;
}
int main()
{
    int arr[20],n,sort;
    printf("enter size of an array\n");
    scanf("%d",&n);
    printf("enter an array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort =sorted(arr,n);
    if(sort==1)
    printf("array is sorted");
    else
    printf("array is not sorted");
}