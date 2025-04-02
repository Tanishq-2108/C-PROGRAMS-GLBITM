#include<stdio.h>
int main()
{
    char n;
    int ch;
    printf("enter the alphabet");
    scanf("%c",&n);
    if((n>=65 && n<=90)||(n>=97 && n<=122))
    ch=0;
    else
    ch=1;
    switch(ch)
    {
        case 0:
         if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U'||n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
         printf("it is vowel");
         else 
        printf("it is consonant ");
        break;
        case 1:
        printf("it is special character");
        break;
    }

}