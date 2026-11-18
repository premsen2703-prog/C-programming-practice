#include<stdio.h>
void indian();
void pakistani();
int main()
{
	printf("enter I or P : ");
	char caste;
	scanf("%c",&caste);
	if(caste=='I')
	{
		indian();
	}
	else if(caste=='P')
	{
		pakistani();
	}
	else {
		printf("wronge letter");
	}
	
	return 0;
}
void indian(){
	printf("YOU ARE INDIAN \n");
}
void pakistani(){
	printf("YOU ARE PAKISTANI");
}
