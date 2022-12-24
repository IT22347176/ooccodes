#include <iostream>
#include <iomanip>
using namespace std; 

class Student{
	private:
		int studentNo;
		int m1;
		int m2;
		int m3;
	public:
		void setStudentNo(int no);
		void assignMarks(int n1,int n2,int n3);
		float calcAvg(); 
};

void Student::setStudentNo(int no){
	studentNo=no; 
}

void Student::assignMarks(int n1,int n2,int n3){
	m1=n1;
	m2=n2;
	m3=n3; 
}

float Student::calcAvg(){
	float avg;
	avg=(m1+m2+m3)/3;
	return avg; 
}


int main(void){
	
	Student s1,s2; 
	
	s1.assignMarks(30,20,40); 
	s1.setStudentNo(0001);
	
	s2.assignMarks(25,30,20);
	s2.setStudentNo(0002);
	
	cout<<"Average of student 1: "<<s1.calcAvg()<<endl;
	cout<<"Average of student 2: "<<s2.calcAvg()<<endl; 
	
	
}
