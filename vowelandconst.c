#include<stdio.h>
int main()
{
    char N;
    printf("enter a alphabet \n");
    scanf("%c",&N);
    if((N>=65 && N<=90)||(N>=97 && N<=122))
    {
        if(N=='A'||N=='E'||N=='I'||N=='O'||N=='U'||N=='a'||N=='e'||N=='i'||N=='o'||N=='u')
    printf("it is vowel");
    else 
    printf("it is consonant ");
    }
    else
    {
        printf("it is specail character");
    }
    
}