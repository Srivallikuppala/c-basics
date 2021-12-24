#include<stdio.h>
void main()
{
	float rad,area,perimeter;
	printf("rad is");
	scanf("%f",&rad);
	area=3.14*rad*rad;
	printf("area of circle with %f is %.2f\n",rad,area);
	perimeter=3.14*2*rad;
	printf("perimeter of circle with %f is %.2f",rad,perimeter);
}
