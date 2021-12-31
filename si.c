#include<stdio.h>
void main()
{
	float si,p,t,r;
	printf("enter p,t,r values");
	scanf("%f%f%f",&p,&t,&r);
	si=((p*t*r)/100);
	printf("simple intrest of an amount of %f for %fyears at %f interst rate is %f",p,t,r,si);
}
