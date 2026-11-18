#include<stdio.h>
#include<math.h>
int age(int a,int b);
int main()
{
	int a,b;
	printf("enter the present year : ");
	scanf("%d",&a);
	printf("enter the birth year : ");
	scanf("%d",&b);
	age(a, b);
	
	return 0;

}
int age(int a,int b){
		
	int A=a-b;
	printf("%d",A);
	
}
