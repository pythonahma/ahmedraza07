/*Write a program to swap the two numbers using friend function without
using third variable*/
#include<iostream>
using namespace std;

class NumberSwapper{
	private:
		int num1,num2;
		
	public:
		NumberSwapper(int n1,int n2):num1(n1),num2(n2){}
		
		friend void swapNumbers(NumberSwapper &ns);
		
		void displayNumbers(){
			cout<<"Number 1: "<<num1 <<endl;
			cout<<"Number 2: "<<num2 <<endl;
			
		}
};

void swapNumbers(NumberSwapper &ns){
	ns.num1= ns.num1 + ns.num2;
	ns.num2= ns.num1 - ns.num2;
	ns.num1= ns.num1 - ns.num2;
}

int main(){
	int num1,num2;
	
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	
	NumberSwapper ns(num1,num2);
	
	cout<<"Before Swapping: "<<endl;
	ns.displayNumbers();
	
	swapNumbers(ns);
	
	cout<<"After swapping : "<<endl;
	ns.displayNumbers();
	
	return 0;
}
