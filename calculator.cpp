#include <iostream>
using namespace std;
int main()
{
	int a,b,num=0;
	cout<<"Enter the value of first operands"<<endl;
	cin>>a;
	
	cout<<"Enter the value of Second operands"<<endl;
	cin>>b;
	
	cout<<"Please enter the number to perform operation"<<endl;
	cout<<"Enter 1 for Adition"<<endl;
	cout<<"Enter 2 for Subraction"<<endl;
	cout<<"Enter 3 for Multiplication"<<endl;
	cout<<"Enter 4 for Devision"<<endl;
	cin>>num;
	
	if(num==1)
	{
		cout<<"result of addition = "<<a+b<<endl;
	}
	else if(num==2)  
	{
		cout<<"Result of subraction = "<<a-b<<endl;	
	}
	else if(num==3)
	{
		cout<<"Result of multiplication = "<<a*b<<endl;
	}
	else if(num==4)
	{
		cout<<"Result of devision = "<<a/b<<endl;
	}
	else
	{
		cout<<"Please enter the vaild number between 1 to 4"<<endl;
	}
	return 0;
	 
	
	
}
