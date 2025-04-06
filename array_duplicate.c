#include<stdio.h>
int duplicate(int arr[],int n)
{
    int temp[20],count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
          temp[count]=arr[i];
          count++;  
        }
    }
    for(int i=0;i<count;i++)
    {
        printf("\n%d",temp[i]);
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
    duplicate(arr,n);
}