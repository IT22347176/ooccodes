#include <iostream>
#include <iomanip>
using namespace std; 

class Rectangle{
	private:
		int width;
		int length; 
	public:
		void setWidth(int no); 
		void setLength(int no);
		int calArea();
	
}; //Class



void Rectangle::setWidth(int no){
	width=no; 
}

void Rectangle::setLength(int no){
	length=no;
}

int Rectangle::calArea(){
	int area=length*width;
	return area; 
}

int main(void){
	
	Rectangle rec1,rec2,rec3,rec4; 
	
	rec1.setWidth(5);
	rec1.setLength(10);
	
	rec2.setWidth(10);
	rec2.setLength(20);
	
	rec3.setWidth(20);
	rec3.setLength(40);
	
	rec4.setWidth(40);
	rec4.setLength(80);
	
	cout<<rec1.calArea()<<endl;
	cout<<rec2.calArea()<<endl;
	cout<<rec3.calArea()<<endl;
	cout<<rec4.calArea()<<endl;
	
	return 0; 
}
