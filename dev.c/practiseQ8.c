#include<stdio.h>
int main()
{
	int day;
	printf("enter number(1-7) : ");
	scanf("%d",&day);
	switch(day)
	{
		case 1: printf("monday");
		break;
		case 2: printf("tuesday");
		break;
		case 3: printf("wednusday");
		break;
		case 4: printf("thusday");
		break;
		case 5: printf("friday");
		break;
		case 6: printf("saturday");
		break;
		defult: printf("sunday");
	}
	return 0;
}
