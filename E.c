#include<stdio.h>
void main(){
	int a=2,b=5;
	a=a^b;
	b=b^a;

	printf("%d %d ",a,b);
}
