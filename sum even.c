#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("enter a number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
		s+=i*i*i;	
		}
		i++;
	}
	printf("sum is %d",s);
	return 0;
}
