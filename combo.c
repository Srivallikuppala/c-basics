#include<stdio.h>
void main()
{
	int n,sum,sume,sumo;
	printf("enter n value");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("sum of %d natural numbvers is %d\n",n,sum);
    sume=n*(n+1);
    printf("sum of %d even natural numbvers is %d\n",n,sume);
    sumo=n*n;
    printf("sum of %d odd natural numbvers is %d",n,sumo);
}
