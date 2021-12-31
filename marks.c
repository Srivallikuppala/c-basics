#include<stdio.h>
void main()
{
	int marks1,marks2,marks3,marks4;
	printf("enter marks1,marks2,marks3,marks4");
	scanf("%d%d%d%d",&marks1,&marks2,&marks3,&marks4);
	if(marks1<35)
	{
		printf("failed in maths");
	}
	if(marks2<35)
	{
		printf("failed in physics");
	}
	if(marks3<35)
	{
		printf("failed in chemistry");
	}
	if(marks4<35)
	{
		printf("failed in computer science");
	}
}
