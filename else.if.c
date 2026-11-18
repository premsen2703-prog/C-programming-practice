#include<stdio.h>
int main ()
{
	int lastdigit,sum,number;
	sum=0;
	number=240;
	while (number<0)
	{
		lastdigit=number%10;
		sum=sum+lastdigit;
		number=number|10;
		primtf("%d ",sum);
		}
	return 0;
}
