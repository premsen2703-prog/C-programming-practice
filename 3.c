#include<stdio.h>
void main(){
	int cp,sp,loss,profit,lp,pp;
	printf("enter the cost price : ");
	scanf("%d",&cp);
	printf("Enter the selling price : ");`	``	```
	scanf("%d",&sp);
	if(cp>sp){
		loss= cp-sp;
		lp=(loss*100)/cp;
		printf("the loss is : %d and the loss percent is %d ",loss,lp);
	}
	else{
		profit=sp-cp;
		pp=(profit/cp)*100;
		printf("the profit is : %d and the profit percent is %d ",profit,pp);
	}
}
