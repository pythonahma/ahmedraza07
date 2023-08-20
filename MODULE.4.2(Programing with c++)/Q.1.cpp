// WAP to create simple calculator using class
#include<iostream>
using namespace std;

class calculator{
	public:
		int add(int a,int b){
			return a+b;
		}
		
		int subtract(int a,int b){
			return a-b;
		}
		
		int multiply(int a,int b){
			return a*b;
		}
		
		int divide(int a,int b){
			if(b!=0){
				return a/b;
			}else{
				cout<<"Enrror:cannot divide by zero!"<< endl;
				return 0;
			}
		}
		
		
};
int main(){
	calculator calc;
	int num1,num2;
	
	cout<<"Enter Your 1st  value :";
	cin>>num1;
	
	cout<<"Enter Your 2nd value :";
	cin>>num2;
	
	cout<<"addition:"<<calc.add(num1,num2)<<endl;
	cout<<"substraction:"<<calc.subtract(num1,num2)<<endl;
	cout<<"multiply:"<<calc.multiply(num1,num2)<<endl;
	cout<<"divide:"<<calc.divide(num1,num2)<<endl;
	
	return 0;
}
