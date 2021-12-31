#include<stdio.h>
void main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	if(num==0)
	{
		printf("zero");
	}
	else if(num%2!=0)
	{
		printf("odd");
	}
	else if(num%2==0)
	{
		printf("even");
	}
}
