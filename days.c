#include<stdio.h>
int main()
{
    int n;
    printf("enter a digit 0-6\n");
    scanf("%d",&n);
    switch(n)
    {
        case 0:
        printf("sunday\n");
        break;
        case 1:
        printf("monday\n");
        break;
        case 2:
        printf("tuesday\n");
        break;
        case 3:
        printf("wednesday\n");
        break;
        case 4:
        printf("thursday\n");
        break;
        case 5:
        printf("friday\n");
        break;
        case 6:
        printf("saturday\n");
        break;
        default :
        printf("galat input\n");
        break;
    }
}