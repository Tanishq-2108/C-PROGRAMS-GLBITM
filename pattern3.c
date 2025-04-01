#include<stdio.h>
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int k=0;k<4-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i+i+1;j++)
        {
            if(j%2==0)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
}