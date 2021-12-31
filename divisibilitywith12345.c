#include<stdio.h>
void main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	if(num%1==0)
	{
		printf("number divisible by 1\n");
	}
	if(num%2==0)
	{
		printf("number divisible by 2\n");
	}if(num%3==0)
	{
		printf("number divisible by 3\n");
	}if(num%4==0)
	{
		printf("number divisible by 4\n");
	}
	if(num%5==0)
	{
		printf("number divisible by 5");
	}
}
