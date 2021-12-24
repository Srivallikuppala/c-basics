#include<stdio.h>;
void main()
{
	float rad,area,perimeter;
	scanf("%f"&rad);
	area=3.14*rad*rad;
	printf("area of circle with %f is %f",rad,area);
	perimeter=2*3.14*rad;
	printf("perimeter of circle with %f is %f",rad,perimeter);
}
