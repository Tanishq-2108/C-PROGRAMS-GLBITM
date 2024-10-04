#include<stdio.h>
int main()
{

	int a,b,c;
	printf("enter a sides of a b and c");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b==c)
	{
		printf("this is equilateral triangle");
	}
	else if((a==b&&b==c)||(b==c&&a==c))
	printf("this is isoscles triangle");
	else
	printf("this is scalene triangle ");
	return 0;
}
