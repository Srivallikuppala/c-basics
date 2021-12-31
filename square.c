#include<stdio.h>
void main()
{
	int side,area,peri;
	printf("enter side value");
	scanf("%d",&side);
	area=side*side;
	printf("area of square is %d\n",area),
	peri=4*side;
	printf("perimeter of square is %d",peri);
}
