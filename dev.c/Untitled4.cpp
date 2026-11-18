#include<stdio.h>
int sum(int a,int b);
void printtalbe(int n);

int main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	
	printtable(int n);//argument/actual paramerter
	return 0;

int sum(int x,int y){
	return x+y;
}
void printtable(int n){
	//parameter/formal parameter
	for(int i=1;i<=10;i++)
	printf(i*n);
}
}
