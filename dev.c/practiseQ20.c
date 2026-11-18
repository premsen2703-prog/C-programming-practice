#include<stdio.h>
int main()
{
     int n,fact;
	printf("enter the number : ");
	scanf("%d",&n);
	fact =1;
	int i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		}	
		printf("final factorial is %d",fact);
		return 0;
}
