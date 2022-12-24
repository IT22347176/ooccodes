#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
	
	float dis,tot; 
	
	cout<<"Enter the price to be paid: "; 
	cin>>tot; 
	
	if(tot>10000)
		dis=tot*0.25; 
	else if(tot>=500)
		dis=tot*0.15;
	else if(tot>=3000)
		dis=tot*0.1; 
	else
		dis=0; 
	
	cout<<"Discount received: "<<setiosflags(ios::fixed)<<setprecision(2)<<dis; 
	
	
	return 0; 
}
