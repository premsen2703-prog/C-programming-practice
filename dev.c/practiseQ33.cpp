#include<stdio.h>
float calculatepercentage(float math,float sanskrit ,float science);
int main()
{
	int science=70;
	int sanskrit=40;
	int math=40;
	printf("percentage is : %d",calculatepercentage(science,math,sanskrit));
}

	int calculatepercentage(int math,int sanskrit,int science){
		return ((science+math+sanskrit)/3)*100;
	}

