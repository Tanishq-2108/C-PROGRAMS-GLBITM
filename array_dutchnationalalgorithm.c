//sort an array of 0's,1's and 2's
#include<stdio.h>
void swap(int *m,int *n)
{
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}
int dutch(int arr[],int n)
{
    int lo=0,mid=0,hi=n-1;
    while(mid<=hi)
    {
        if(arr[mid]==0)
        {
            swap(&arr[lo],&arr[mid]);
            mid++;
            lo++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(&arr[mid],&arr[hi]);
            hi--;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
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
    dutch(arr,n);
}