#include<stdio.h>
void printnamaste();
void printbonjour();
	
	int main()
	{
		printf("enter f for franch & i for indian :");
		char ch;
		scanf("%c",&ch);
		if(ch=='i'){
			namste();
		}
		else{
			bonjour();
		}
		return 0;
	}
	void namaste(){
		printf("namasate\n");
	}
	void banjour(){
		printf("bonjour\n");
	}
