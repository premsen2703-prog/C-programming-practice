#include<stdio.h>
int main()
{
	int n,a,b,i,j;
	printf("enter the number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=n;j--)
	{
		if(i>j)
		printf("*");
	}
	else
	 {
	
	printf(" ");
	}
	}
	return 0;
}
