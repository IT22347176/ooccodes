#include <iostream>
#include <iomanip>
using namespace std; 

int main(void){
	
	for(int count=1000; count>=100; count-=100)
		cout<<count<<endl; 
	cout<<endl; 
	int count=1000; 
	
	do{
		cout<<count<<endl;
		count-=100;  
	}while(count>=100);
	cout<<endl; 
	count=1000; 
	
	while(count>=100){
		cout<<count<<endl;
		count-=100; 
	}
	
	
	
	
	
	return 0; 
}
