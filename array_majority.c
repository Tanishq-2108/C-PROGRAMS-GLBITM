#include<stdio.h>
int majority(int arr[],int n)
{
    int maj=0,max=0,res;
    for(int i=0;i<n;i++)
    {
        res=1;
        for(int j=i+1;i<n;j++)
        {
            if(arr[i]==arr[j])
            {
                res++;
            }
        }
        if(res>max)
        {
            maj=i;
            max=res;
        }
    }
    if(max > n/2)
    printf("majority element is %d",arr[maj]);
    else
    printf("no majority elemnt ");
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
    majority(arr,n);
}