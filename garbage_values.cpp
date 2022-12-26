#include <iostream>
#include <cstring>
using namespace std; 

class Employee {
	private:
		int empno;
		char name[20];
		double basicSal;
		double allowance;
		double salary;
	public:
		void assignDetails(int pempno, char pname[], double pbasicSal);
		void setAllowance(double pallowance);
		void calcSalary();
		void printPaySlip();
};


int main() {
	Employee emp;
	emp.printPaySlip();
	return 0;
}


void Employee::assignDetails(int pempno, char pname[], double pbasicSal){
}
void Employee::setAllowance(double pallowance){
}
void Employee::calcSalary(){
}
void Employee::printPaySlip(){
	
	cout<<empno<<endl;
	cout<<name<<endl;
	cout<<basicSal<<endl;
	cout<<allowance<<endl;
	cout<<salary; 
	
}




