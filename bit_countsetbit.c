#include<stdio.h>
int countbit(int n)
{
   int  count=1;
    while(n>0)
    {
        if(n&1==1)
        {
            count++;
        }
        n=n<<1;
    }
    printf("number of bits %d",count);
}
int main()
{
    int n,k;
    printf("enter a number");
    scanf("%d",&n);
    countbit(n);
}