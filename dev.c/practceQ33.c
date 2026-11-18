#include<stdio.h>
int calculatepercentage(int math,int sanskrit ,int science);
int main()
{
	int science=70;
	int math=80;
	int sanskrit=60;

	printf("percentage is : %d",calculatepercentage(science,math,sanskrit));
}

	int calculatepercentage(int math,int sanskrit,int science){
		return ((science+math+sanskrit)/3);
	}

