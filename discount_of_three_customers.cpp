#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
	float dis,tot,tdis; 
	int count=0; 
	char cont; 
	while(count<3){
		cout<<"Enter the bill amount of customer "<<count+1<<": "; 
		cin>>tot; 
		count+=1; 
		if(tot>10000)
			dis=dis+(tot*0.25); 
			
		else if(tot>=5000)
			dis=dis+(tot*0.15);
			
		else if(tot>=3000)
			dis=dis+(tot*0.1); 
			
		else
			dis=0;
		
		tdis=tdis+dis; 
 		
 		if(count==3)
 			break; 
 		
 		cout<<"Do you want to continue? (y-yes n-no): "; 
 		cin>>cont; 
 		
 		if(cont=='y'||cont=='Y')
 			continue;
 		else if(cont=='n'||cont=='N')
 			break;
		 
		else
			cout<<"Invalid Input!";
			return -1; 
	}
	cout<<"Total discount given: "<<dis;
	 
	return 0; 
}
