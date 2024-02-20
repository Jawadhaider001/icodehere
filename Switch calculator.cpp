#include <iostream>
using namespace std;
int main()
{
	int a,b,c=0;
	cout<<"Please enter the first value"<<endl;
	cin>>a;
	
	cout<<"Please enter the second value"<<endl;
	cin>>b;
	
	cout<<"Which operations you want to calculate"<<endl;
	cout<<"For addition enter 1"<<endl;
	cout<<"For Subtract enter 2"<<endl;
	cout<<"For multiply enter 3"<<endl;
	cout<<"For divide enter 4"<<endl;
	cin>>c;
	
	switch(c)
	{
		case 1:
			cout<<"the addition is : "<<a+b<<endl;
			break;
			
		case 2:
			cout<<"the subtract is : "<<a-b<<endl;
			break;
			
		case 3:
			cout<<"the multiply is : "<<a*b<<endl;
			break;
			
		case 4:
			cout<<"the divide is : "<<a/b<<endl;
			break;
			
		default:
			cout<<"Please the correct number "<<endl;
	}
	return 0;
} 
