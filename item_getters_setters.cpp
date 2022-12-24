#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std; 

class Item{
	private:
		int itemCode;
		char name[20];
		float price;
	public:
		void setItemDetails(int no, char iname); 
		void setprice(float iprice);
		int getItemCode();
		float getPrice();  
};

void Item::setItemDetails(int no,char iname){
	itemCode=no;
	strcpy(name,iname);
}

void Item::setprice(float iprice){
	price=iprice; 
}

int Item::getItemCode(){
	return itemCode;
}

float Item::getPrice(){
	return price; 
}


int main(void){
	Item item1; 
	int i_code;
	char i_name[20];
	float i_price;
	
	cout<<"Input item code: ";
	cin>>i_code;
	cout<<"Input item name: "; 
	cin>>i_name; 
	cout<<"Input item price: "; 
	cin>>i_price; 
	
	item1.setItemDetails(i_code,i_name); 
	item1.setprice(i_price); 
	
	cout<<"Item code: "<<item1.getItemCode()<<endl;
	cout<<"Item price: "<<item1.getPrice()<<endl; 
	
	
	
}

