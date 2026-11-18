#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int fact=1,i;
	for( i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("final factorial is %d",fact);
	return 0;
} 
