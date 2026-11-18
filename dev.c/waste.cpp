#include<stdio.h>
void indian();
void pakistani();
int main()
{
    printf("enter the nationnality : ");
    char ch;
    scanf("%c", &ch );
    

    if(ch == 'i')
     indian();
    else
    {
    
     pakistani();
	 }
     return 0;
    

}
void indian()
{
    printf("NAMASTE \n");
}
void pakistani()
{
    printf("valikuaasalam \n");
}

