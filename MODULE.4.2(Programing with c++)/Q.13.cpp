/*Write a program to find the max number from given two numbers using
friend function*/
#include<iostream>
using namespace std;

class NumberFinder{
	private:
		int num1,num2;
		
	public:
		NumberFinder(int n1,int n2): num1(n1), num2(n2){}
		
		friend int findMax(NumberFinder &nf);
};

int findMax(NumberFinder &nf){
	return (nf.num1>nf.num2) ? nf.num1: nf.num2;	
}

int main(){
	int num1,num2;
	
	cout<<"Enter two numbers: ";
	cin>>num1 >> num2;
	
	NumberFinder nf(num1,num2);
	
	int maxNum = findMax(nf);
	
	cout<<"Maximum number: "<<maxNum<<endl;
}
