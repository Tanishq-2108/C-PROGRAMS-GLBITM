#include<stdio.h>
int main()
{
    int n;
    printf("enter year\n");  
    scanf("%d",&n);
    if( n%4==0 && n%100 !=0)
    printf("it is leap year\n");
    else if(n%400==0 )
    printf("it is leap year\n");
    else
    printf("it is not leap year\n");
}