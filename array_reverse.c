#include<stdio.h>
int reverse(int arr[],int n)
{
    int temp[20];
    for(int i=0;i<n;i++)
    {
        temp[n-i-1]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",temp[i]);
    } 
}
int main()
{
    int arr[20],n;
    printf("enter size of an array\n");
    scanf("%d",&n);
    printf("enter an array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
}