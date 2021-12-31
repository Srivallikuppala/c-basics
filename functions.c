#include<stdio.h>
void main()
{
	int num1,num2,sum,diff,pro,div,mod;
	printf("enter num1 and num2");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("sum is %d\n",sum);
	diff=num1-num2;
	printf("diff is %d\n",diff);
	pro=num1*num2;
	printf("pro is %d\n",pro);
	div=num1/num2;
	printf("div is %d\n",div);
	mod=num1%num2;
	printf("mod is %d",mod);
}
