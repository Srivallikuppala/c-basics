#include<stdio.h>
void main()
{
	float r,area,peri;
	printf("enter radius");
	scanf("%f",&r);
	area=(3.14)*r*r;
	printf("area of circle with %f is %f",r,area);
	peri=2*(3.14)*r;
	printf("perimeter of circle with %f is %f",r,peri);
}
