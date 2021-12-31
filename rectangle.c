#include<stdio.h>
void main()
{
	int l,w,area,peri;
	printf("enter length and width");
	scanf("%d%d",&l,&w);
	area=l*w;
	printf("area of rectangle with length %d and width %d is %d",l,w,area);
	peri=2*(l+w);
	printf("perimeter of rectangle with length %d and width %d is %d",l,w,peri);
}
