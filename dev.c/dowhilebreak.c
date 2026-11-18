#include<stdio.h>
int main()
{
	//program for multiple of 7...
	int n;
	do{
	
	printf("enter the number :");
	scanf("%d",&n);
	printf("%d\n",n);
	if(n%7==0)//multiple of 7...
	{
		break;
	}
}
while(1);
printf("thank you \n");
return 0;	
}
