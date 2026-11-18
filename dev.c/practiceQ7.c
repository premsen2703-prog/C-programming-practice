#include<stdio.h>
int main()
{
int age;
	printf("Enter age : ");
	scanf("%d",&age);
	age>18?printf("adult \n"):printf("not adult \n");
	age<13?printf("child \n"):printf("Teenager \n");
	return 0;
}
