#include<stdio.h>
int uni(int arr1[],int n1,int arr2[],int n2)
{
    int i=0,j=0;
    while(i+j<=n1+n2)
    {
        if(arr1[i]<arr2[j])
       {
        printf("%d ",arr1[i]);
        i++;
       }
       else if(arr2[j]<arr1[i])
       {
        printf("%d ",arr2[j]);
        j++;
       }
       else
       {
        printf("%d ",arr1[i]);
        i++;
        j++;
       }
    }
}
int main()
{
    int arr1[20],n1,arr2[20],n2;
    printf("enter size of 1st array\n");
    scanf("%d",&n1);
    printf("enter 1st array\n\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter size of 2nd array\n");
    scanf("%d",&n2);
    printf("enter 2nd array\n\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    uni(arr1,n1,arr2,n2);
}