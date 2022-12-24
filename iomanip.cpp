#include <iostream>
#include <iomanip>

using namespace std; 

int main(void){
	
	float x=123.987654321;
	
	//setw(n)
	//setprecision(n)
	//setiosflags(ios::fixed) 
	
	cout<<x;//123.988
	cout<<endl;
	cout<<setw(15)<<x;//               123.988
	cout<<endl;
	cout<<setprecision(5)<<x;//123.99
	cout<<endl;
	cout<<setiosflags(ios::fixed)<<setprecision(5)<<x;//123.98766
	
	
	
	
	return 0; 
}
