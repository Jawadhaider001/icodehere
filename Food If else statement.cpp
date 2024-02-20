#include <iostream>
using namespace std;
int main() 
{
  int rice,manc, water; 
  cout << "If Rice Available Input 1";
  cin >> rice;

  if (rice == 1)
   	{ 
       		cout << "You got Rice " <<endl;
       		cout<<"If Manchurian availble Input 2"<<endl;
       		cin>>manc;
       		
       		if (manc==2)
				{
					cout<<"Have happy meal";
			  	}       		
	}
    
	else 
		{ 
      		cout << "No Food today "<< endl;
    	}
  	 
  return 0;
}

