#include<stdio.h>
int main()
{
    int a,b,c,ch;
    printf("Press 1 to check traingle by angle \n Press 2 for to check traingle by side");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("\n enter the  values of angle ");
            scanf("%d %d %d",&a,&b,&c);
            if(a+b+c==180)
            {
                if(a==b && b==c)
                printf("\nit is equilateral traingle ");
            else if(a==b || b==c)
                printf("\nit is isocles traingle ");
            else
                printf("\nit is scalene traingle ");
            }
            else{
                printf("it is not traingle");
            }
            break;
        }
        case 2:
        {
            printf("\nenter the value of sides ");
            scanf("%d %d %d",&a,&b,&c);
            if(a+b>c || b+c>a ||c+a>b)
            {
                if(a==b && b==c)
                printf("\nit is euilateral traingle ");
                else if (a==b || b==c)
                printf("\nit is isocles traingle ");
                else
                printf("\nit is scalene traingle ");
            }
            else{
                printf("it is not traingle");
            }
            break;
        }
        default:
        printf("\nplease enter a valid choose");
        break;
    }
}