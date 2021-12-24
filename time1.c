#include<stdio.h>
void main()
{
	int hours,mins,time;
	printf("enter time in hours and minutes");
	scanf("%d%d",&hours,&mins);
	time=(hours*60)+mins;
	printf("time is %d minutes",time);
}
