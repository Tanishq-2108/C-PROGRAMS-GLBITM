#include<stdio.h>
int main()
{
	int temp =0, num;
	printf("enter a number");
	scanf("%d",&num);
	do{
		temp=temp*10 + num%10;
		num=num/10;
	}while(num>0);
	printf("number is  %d",temp);
	return 0;
}
