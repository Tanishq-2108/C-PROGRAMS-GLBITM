#include<stdio.h>
int main()
{
    int n;
    printf("enter a number  of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        char p='A';
        for(int j=1;j<=i;j++)
        {
            printf("%c",p);
            p++;
        }
        printf("\n");
    }
}