#include <iostream>
#include <iomanip>

using namespace std;

class Circle{
	private:
		float radius;
	public:
		void setRadius(float no);
		float calcArea(); 
};

void Circle::setRadius(float no){
	radius=no;
}

float Circle::calcArea(){
	
	float area;
	area=3.14*(radius*radius); 
	return area; 
	
}

int main(void){
	
	Circle c1,c2;
	
	c1.setRadius(7); 
	c2.setRadius(14);
	
	cout<<"Area of the circle 1: "<<setiosflags(ios::fixed)<<setprecision(2)<<c1.calcArea()<<endl;
	cout<<"Area of the circle 2: "<<setiosflags(ios::fixed)<<setprecision(2)<<c2.calcArea()<<endl; 
	
	
}
