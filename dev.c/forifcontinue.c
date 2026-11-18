#include<stdio.h>
int main()

{
int i;
	for (i=1; i<=10; i++)
	{
		if(i==6)//for perticuler skipping the trem...
		{
			continue;
		}
		printf("%d \n",i);
	}
	return 0;
}
