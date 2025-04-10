#include<stdio.h>
int occuring(int arr[],int n)
{
   int res=0;
   for(int i=0;i<n;i++)
   {
    res=res^arr[i];
   } 
   printf("odd occuring %d",res);
}
int main()
{
    int arr[20],n,k;
    printf("enter the number of elements ");
    scanf("%d",&n);
    printf("enter the elements \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    occuring(arr,n);
}