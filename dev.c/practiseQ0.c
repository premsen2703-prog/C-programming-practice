#include<stdio.h>
int main()
{
	int age;
	printf("Enter Age : ");
	scanf("%d",&age);
	
	if(age>18){
		printf("Adult \n");
		printf("They can vote \n");
		printf("They can drive \n");
	}
	else
	{
		printf("Not adult \n");
	}
	printf("Thank you");
	return 0;
}
