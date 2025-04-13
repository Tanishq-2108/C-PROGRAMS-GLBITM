#include<stdio.h>
#include<limits.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int median(int arr1[],int arr2[],int n1,int n2)
{
    int begin=0;
    int end=n1;
    while(begin<=end)
    {
        int i1=(begin+end)/2;
        int i2=(n1+n2+1)/2-i1;
        int min1=(i1==n1)?INT_MAX:arr1[i1];
        int max1=(i1==0)?INT_MIN:arr1[i1-1];
        int min2=(i2==n2)?INT_MAX:arr2[i2];
        int max2=(i2==0)?INT_MIN:arr2[i2-1];
        if(max1<=min2 && max2<=min2)
        {
            if((n1+n2)%2==0)
            {
                float p=(MAX(max1,max2)+ MIN(min1,min2))/2;
                printf("%f",p);
                break;
            }
            else
            {
                float p=MAX(max1,max2);
                printf("%f",p);
            }
        }
        else if(max1>min2)
        {
            end=i1-1;
        }
        else{
            begin=i1+1;
        }
    }
}
int main()
{
    int arr1[20],arr2[20],n1,n2;
    printf("enter the number of elements in array 1");
    scanf("%d",&n1);
    printf("enter the array elments\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the number of elements in array 2");
    scanf("%d",&n2);
    printf("enter the array elments\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    median(arr1,arr2,n1,n2);
}