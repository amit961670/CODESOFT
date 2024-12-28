#include<iostream>
using namespace std;

void displaymenu(){
	cout<<"Simple Calculator "<<endl;
	cout<<"1. Addition "<<endl;
	cout<<"2. Subtraction "<<endl;
	cout<<"3. Multiplication "<<endl;
	cout<<"4. Division "<<endl;
	cout<<"5. Exit "<<endl;
}

int main(){
	double num1, num2;
	int choice;
	
	while (true){
		displaymenu();
		cout<< "Enter your choice (1-5):";
		cin>> choice;
		
		if (choice ==5){
			cout<<"Existing the Calculator. Goodbye!" <<endl;
			break;
		}
		cout<<"Enter two numbers: ";
		cin>> num1 >>num2;
		
		switch(choice){
			case 1:
				cout<<"Result: "<< num1 + num2 <<endl;
			    break;
			case 2:
			    cout<<" Result: "<<num1- num2<<endl;
				break;
			case 3:
			    cout<<" Result: "<< num1 * num2<<endl;
			    break;
			case 4:
				if (num2!=0){
				   cout<<"Result: "<<num1/num2<<endl;	
				}	 	    
				else{
					cout<<"Error: Division by Zero is not allowed."<<endl;
				}
				break;
			default:
				cout<<"Invaild choice. Please select a valid option."<<endl;	
		}
		cout<<endl;
	}
	return 0;
}
