#include<stdio.h>
int main()
{
	int n,sum =0;
	printf("enter the number : ");
	scanf("%d",&n);
	for(int i=1,j=n;i<=n&&j>=1;i++,j--){
	
	printf("%d \n",j);
	sum=sum+i;
	}printf("%d",sum);
	return 0;
}
