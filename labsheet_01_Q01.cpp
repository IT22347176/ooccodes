#include <iostream>
using namespace std;

int searchKey(int num,int arr[]);

int main(){

	int numbers[10];

	for (int i = 0; i < 10; i++) {
		cout << "Enter the number " << i + 1 << ": ";
		cin >> numbers[i];
	}



	int num; 
	cout << "Enter the number to find :"; 
	cin >> num; 

	searchKey(num, numbers);
}

int searchKey(int num,int arr[]) {
	int flag; 
	for (int i = 0; i < 10; i++) {
	 
		if (arr[i] == num) {

			cout << "Index is: " << i;
			flag = 0; 
			break; 

		}

		else {
			flag = -1; 
		}

	}

	if (flag == -1) {

		cout << " Value not found"; 
	}

	return 0; 


}
