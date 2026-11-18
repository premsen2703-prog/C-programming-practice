#include<iostream>
using namespace std;
int main()
{
//    int num;
//	cout << "enter the number";
//	cin>>num;
//	if(num==5)
//	{
//	cout<<"if will be executed"
//	}
//	return 0;
//int main;
//if(age>=18)
//{
//	cout<<"eligible";
//	cin>>ag
//}
//else {
//	cout<<""
//}
//return 0;

int p;
cout<< "enter percentage:";
cin>>p;
if(p<=100 && p>=65)
cout<<"I";
else if(p<65 && p>=50)
cout<<"II";
else if(p<50 && p>=35)
cout<<"III";
else 
cout<<"fail";
return 0;
}
