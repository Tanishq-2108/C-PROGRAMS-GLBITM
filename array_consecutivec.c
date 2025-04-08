//consecutive array program 
#include<stdio.h>
int counsecutiveones(int arr[],int n)
{
    int c=1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1] )
        c++;
    }
    return c;
}
int main()
{
    int arr[20],n,x,p;
    printf("enter size of an array\n");
    scanf("%d",&n);
    printf("enter an array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=counsecutiveones(arr,n-1);
    printf("counsecutive array is %d",p);
    return 0;
}