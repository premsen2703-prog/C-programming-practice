#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number : ");
	scanf("%d",&a);
	printf("enter the number : ");
	scanf("%d",&b);
	int sum=0;
	int i;
	for(i=a;i<=b;i++){
	sum+=i;	
	}
	printf("sum is %d",sum);
	return 0;
}
