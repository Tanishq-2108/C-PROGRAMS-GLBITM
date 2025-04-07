#include<stdio.h>
int secondlargest(int arr[],int n)
{
    int largest =0,res=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1 || arr[res]<arr[i])
            res=i;
        }
    }
    return res;
}
int main()
{
    int arr[10],index,n;
    printf("enter the size of an array: ");
    scanf("%d",&n);
    printf("\nenter an array element")
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    index=secondlargest(arr,n);
    if(index==-1)
    printf("second largest didn't exist");
    else
    printf("second largest is %d",arr[index]);
}