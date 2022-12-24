#include <iostream>
#include <iomanip>
using namespace std; 

int main(void){
	
	float a,p,l,h;
	
	cout<<"Please enter the height(cm): ";
	cin>>h;
	
	cout<<"Please enter the length(cm): ";
	cin>>l; 
	
	p=2*(h+l);//perimeter
	a=h*l;//area
	
	cout<<endl<<"Area of the rectangle is: "<<setiosflags(ios::fixed)<<setprecision(2)<<a<<"cm"<<endl;
	cout<<"Perimeter of the rectangle is: "<<setiosflags(ios::fixed)<<setprecision(2)<<p<<"cm"; 
	
	return 0; 
}
