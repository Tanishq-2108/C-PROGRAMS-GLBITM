#include<stdio.h>
#include<conio.h>
int main()
{
    char dep; 
    int sec;
    printf("enter department name\n");
    scanf("%c" ,&dep);
    printf("enter section name a1, a2, a3\n");
    scanf("%d" ,&sec);
    if(dep== 'm')
    {
        printf("from MCA department\n");
        if(sec==3)
        printf("from A3 section\n");
        else
        printf("other section student\n");
    }
    else{
        printf("not from MCA department");
    }
}