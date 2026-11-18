#include<stdio.h>
int main ()
{
	int a,sum,sume,sumo;
	printf("enter the number");
	scanf("%d  ",&a);
	for (a=1;a<=10;a++)
	{
		if(a%2==0)
		{
			sume=sume+a*a;
		}
		else 
		{
		sumo=sumo+a*a*a;
		}
	}
	sum=sume+sumo;
	printf("the sum is");
	return 0;
}
