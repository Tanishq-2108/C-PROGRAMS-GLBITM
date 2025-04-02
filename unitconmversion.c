#include<stdio.h>
int main()
{
    float cn,n;
    int ch;
    printf("\n Press 1 to convert centimeter to meter \n Pres 2 to convert kilogram to gram");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("\nenter the value which you want to convert to meter");
        scanf("%f",&n);
        cn= n/100;
        printf("\nvalue in meter is %f",cn);
        break;
        case 2:
        printf("\nenter the value which you want to convert to kilogram");
        scanf("%f",&n);
        cn= n*1000;
        printf("\nvalue in gram is %f",cn);
        break;
        default :
        printf("\nplease enter a valid choose");
    }
}