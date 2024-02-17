#include <iostream>
using namespace std;

int main()
{
    int marks=0; 
     

    cout << "Enter your marks: "<<endl;
    cin >> marks;


    
    if (marks >= 90 && marks <= 100)
    	{
			cout<<"Congratulations! You Pass this course with 'A' Grade"<<endl;
    	}
    else if (marks >= 80 && marks < 90)
        {
			cout<<"Congratulations! You Pass this course with 'B' Grade"<<endl;
    	}
        
    else if (marks >= 70 && marks < 80)
        {
			cout<<"Congratulations! You Pass this course with 'C' Grade"<<endl;
    	}
        
    else if (marks >= 60 && marks < 70)
        {
			cout<<"Congratulations! You Pass this course with 'D' Grade"<<endl;
    	}
        
    else if (marks >= 50 && marks < 60)
        {
			cout<<"Congratulations! You Pass this course with 'E' Grade"<<endl;
    	}
        
    else if (marks >= 0 && marks < 50)
        {
			cout<<"Unfortunately! You Fail this course"<<endl;
    	}
        
    else
       {
       	cout<<"Please Enter the valid Number Between 1 to 100"<<endl;
	   }

    return 0;
}

