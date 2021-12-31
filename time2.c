#include<stdio.h>
void main()
{
	int time,sec,min,hours;
	printf("enter time");
	scanf("%d",&time);
	hours=time/3600;
	printf("%d hours",hours);
	min=time%3600/60;
	printf("%d minutes",min);
	sec=(time%3600)%60;
	printf("%d seconds",sec);
}
