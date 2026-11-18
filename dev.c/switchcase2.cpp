#include<stdio.h>
int main ()
{
	char day;
	printf("enter day(1-7)");
	scanf("%s",&day);
	switch (day)
	{
		case 'mon': printf("monday \n");
		break;
		case 'tue': printf("tuesday \n");
		break;
		case 'wed': printf("wednesday \n");
		break;
		case 'thur': printf("thursday \n");
		break;
		case 'fri': printf("friday \n");
		break;
		case 'sat':printf("saturday \n");
		break;
		case 'sun':printf("sunday \n");
		
			break;
		}	
}
