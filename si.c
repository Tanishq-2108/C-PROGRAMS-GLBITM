#include<stdio.h>
int main()
{
    int p,n,r,t,si;
    printf("enter principal\n");
    scanf("%d",&p);
    printf("enter rate\n");
    scanf("%d",&r);
    printf("enter time\n");
    scanf("%d",&t);
    si = (p*r*t)/100;
    printf("simple interest %d",si);
}