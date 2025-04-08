#include<stdio.h>
int counsecutiveone(int arr[],int n)
{
    int t=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
            if(t<count)
            t=count;
        }
        else
        {
            count=0;
        }
    }
    printf("maximum counsecutive ones are %d",t);
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
    counsecutiveone(arr,n);
}