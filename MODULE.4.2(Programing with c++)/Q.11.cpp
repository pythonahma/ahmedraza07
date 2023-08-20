/*Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading*/
#include<iostream>
#include<cmath>
using namespace std;

class AreaCalculator{
	public:
		
		double calculateArea(double length,double breadth){
			return length * breadth;
		}
		
		double calculateArea(double base ,double height,char shapeType){
			if(shapeType == 'E'){
				return 0.5 * base * height;
			}else if (shapeType == 'I'){
				return 0.5 * base * height;
			}else{
				cout<<"Invalid shape Type. "<<endl;
				return 0.0;
			}
		}
		double calculateArea(double radius){
			return 3.14159 * radius * radius;
		}
};

int main(){
	AreaCalculator areaCalculator;
	
	double length ,breadth, base,height,radius;
	char shapeType;
	
	cout<<"Enter Length and breadth of rectangle: ";
	cin>>length >>breadth;
	cout<<"Area of Rectangle: "<<areaCalculator.calculateArea(length,breadth)<<endl;
	
	cout<<"\nEnter base and height of triangle: ";
	cin>>base >>height;
	cout<<"Enter shape type (E for equilateral,I for isosceles): ";
	cin>>shapeType;
	
	cout<<"Area of Triangle:"<<areaCalculator.calculateArea(base,height,shapeType)<<endl;
	
	cout<<"\n Enter radius of circle: ";
	cin>>radius;
	
	cout << "Area of Circle: " << areaCalculator.calculateArea(radius) << endl;
	
	return 0;

}
