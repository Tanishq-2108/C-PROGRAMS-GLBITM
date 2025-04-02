#include<stdio.h>
int main()
{
    char n;
    printf("enter alphabet");
    scanf("%c",&n);
    if(n>=95 && n<=90)
    printf("it is uppercase");
    else if(n>=96 && n<=122)
    printf("it is lower case");
    else
    printf("it is special character");
}