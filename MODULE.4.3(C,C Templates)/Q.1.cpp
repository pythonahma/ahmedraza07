//  Write a program of to swap the two values using templates
#include<iostream>
using namespace std;
template <class T>
int swap_numbers(T& x,T& y){
	T t;
	t=x;
	x=y;
	y=t;
	return 0;
}
int main(){
	int a,b;
	cout<<"enter two integers value:";
	cin>>a>>b;
	swap_numbers(a,b);
	cout<<"After swap a="<<a<<",b="<<b<<endl;
	double p,q;
	cout<<"Enter two double value:";
	cin>>p>>q;
	swap_numbers(p,q);
	cout<<"After swap p="<<p<<",q="<<q;
	
	return 0;
}


