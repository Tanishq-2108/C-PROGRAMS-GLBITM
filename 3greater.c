#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first number \n");
    scanf("%d",&a);
    printf("enter second number \n");
    scanf("%d",&b);
    printf("enter third number \n");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("%d is greatest",a);
    else if(b>c && b>a)
    printf("%d is greatest",b);
    else
    printf("%d is greatest",c);
}