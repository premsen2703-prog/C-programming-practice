#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[20];
	float marks[5];
}
s[10];
 main()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("enter the rollno :");
		scanf("%d",&s[i].rollno);
		printf("enter the name :");
		scanf("%s",&s[1].name);
		printf("enter the 5 marks");
		for(j=0;j<5;j++)
		scanf("%f",&s[i].marks[j]);
	}
	
}
 
	

