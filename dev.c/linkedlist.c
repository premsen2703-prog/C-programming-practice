#include<stdio.h>
#include<stdlib.h>
struct link
{
	int number;
	struct link*next;
}*head,*tail,*start;
typedef struct link Node;
int main()
{
	int i;
	char ch='y';
	head=tail=NULL;
	while(1)
	{
		start=(Node*)malloc(sizeof(Node));
		scanf("%d",&start->number);
		start->next=NULL;
		if(head==NULL&&tail==NULL)
		head=tail=start;
	
	else
	{
		tail->next=start;
		tail=start;
	}
	printf("do you want to creat node \n");
	fflush(stdin);
	ch=getchar();
	if(ch=='n')
        break ;
	else 
	if(ch=='y')
	continue;
}
start=head;
while (start!=NULL)
{
	printf("number is %d\n",start->number);
	start=start->next;
}
return 0;
}
