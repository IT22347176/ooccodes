#include <iostream>
#include <cstring>
using namespace std;

void print();
void print(char msg[]);
void print(char msg[],int no);

int main(void){

    print();
    print("SLIIT");
    print("Age",19);

}

void print(){
    cout<<"Hello"<<endl;
}
void print(char msg[]){
    cout<<"Hello "<<msg<<endl;
}
void print(char msg[],int no){
    cout<<msg<<" : "<<no;
}

//Function Overloading 
