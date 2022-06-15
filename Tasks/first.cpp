#include<iostream>
#include<cmath>
using namespace std;



void arithmetic(){
	int choice;
	float first;
	float second;
	
	cout<<"Enter your choice for any operation\n";
	cout<<"1 for Addition\n";
	cout<<"2 for Substraction\n";
	cout<<"3 for Product\n";
	cout<<"4 for Division\n";
	cout << "\n";
	
	cin>>choice;
	cout<<"Enter first number:";
	cin>>first;
	
	cout<<"Enter second number:";
	cin>>second;
	
	cout<<"Result: ";
	
	switch(choice){
		case 1:
			cout<<(first+second);
			break;
		case 2:
			cout<<(first-second);
			break;
		case 3:
			cout<<(first*second);
			break;
		case 4:
			cout<<(first/second);
			break;
		default:
			cout<<"Invalid Choice";
			break;
	}
	cout<< endl;
}

void exponential(){
	float base;
	float exp;
	
	cout<<"Base is : ";
	cin>>base;
	cout<<"Exponent is : ";
	cin>>exp;
	cout<<pow(base, exp)<<endl;
}

void logarithmic(){
	float number;
	cout<<"Enter number for calculating log(e): ";
	cin>>number;
	cout<<log(number)<<endl;
}





int main(){
	int option;
	char choice = '1';
    cout<<"\n";
	
	while(choice == '1'){
	    cout<<"Calculator Application\n";
	    cout<<"1 for Arithmetic\n";
	    cout<<"2 for Exponential\n";
	    cout<<"3 for Logarithm\n";
		cout<<"Enter the type of operation you want to perform\n";
		cin>>option;
		cout << "\n";
		

		switch(option){
			case 1:
				arithmetic();
				break;
			case 2:
				exponential();
				break;
			case 3:
				logarithmic();
				break;
			default:
				cout<<"Please input the valid Operation";
		}
		
		cout<<"Repeat again : 1 or 0"<<endl;
		cin>>choice;
		cout << "\n";
		cout << "\n";
		cout << "\n";
		if(choice == '0'){
			cout<<"Thankyou";
			break;
		}
	}		
	return 0;
}