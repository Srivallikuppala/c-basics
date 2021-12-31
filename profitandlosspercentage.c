#include<stdio.h>
void main()
{
	float cp,sp,pp,lp,p,l;
	printf("enter cp and sp");
	scanf("%f%f",&cp,&sp);
	if(cp<sp)
	{
		printf("profit");
		p=sp-cp;
		printf("%.2f\n",p);
		pp=p*100/cp;
		printf("profit percentage is %.2f\n",&pp);
    }
	else
	{
		printf("loss");
	    l=cp-sp;
		printf("%.2f",l);
	    lp=l*100/cp;
	printf("loss percentage is %.2f",&lp);
    }
}
