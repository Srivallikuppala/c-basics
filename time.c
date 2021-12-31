#include<stdio.h>
void main()
{
	int tm,th,tr;
	printf("enter time in minutes");
	scanf("%d",&tm);
	th=tm/60;
	printf("time is %d hours",th);
	tr=tm%60;
	printf("%d minutes",tr);
}
