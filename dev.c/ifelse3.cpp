#include<stdio.h>
int main()
{
int age =19;
printf("enter the age ");
scanf("%d",&age);
if(age>=18){
    printf("adult \n");
    printf("they can vote and drive \n");
}
else if(age>13&&age<18)
{

	printf("teenager");
}
else
{
	printf("child");
}

    return 0;
}
