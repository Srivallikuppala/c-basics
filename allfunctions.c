#include<stdio.h>
void main()
{
	int num1,num2,sum,difference,product,quotient,remainder;
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("sum of %d and %d is %d\n",num1,num2,sum);
	difference=num1-num2;
	printf("difference of %d and %d is %d\n",num1,num2,difference);
	product=num1*num2;
	printf("product of %d and %d is %d\n",num1,num2,product);
	quotient=num1/num2;
	printf("quotient of %d and %d is %d\n",num1,num2,quotient);
	remainder=num1%num2;
	printf("remainder of %d and %d is %d\n",num1,num2,remainder);
}
