#include<stdio.h>
#include<string.h>
struct book

{
	char title[50];
	int edition;
	int price;
}
	  b[10];
	 main()
	{
		int i;
		printf("enter details");
		for(i=1;i<10;i++)
		{
			scanf("%s",&b[i].title);
			scanf("%d",&b[i].edition);
			scanf("%d",&b[i].price);
		}
	}
	

	
	


