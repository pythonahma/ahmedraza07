/* Write a program to find the multiplication values and the cubic values using
inline function*/

#include<iostream>
using namespace std;
class line
{
	public:
		inline float mul(float a,float b){
			return(a*b);
		}
		inline float cube(float a)
		{
			return(a*a*a);
		}
};
	int main(){
		line obj;
		float val1,val2;
		
		cout<<"\n Enter 1st value: ";
		cin>>val1;
		cout<<"\n Entre 2nd value: ";
		cin>>val2;
		cout<<"\n multiplication value is: "<<obj.mul(val1,val2);
		cout<<"\n\nCube value of ["<<obj.cube(val1)<<"] is::["<<obj.cube(val2)<<"]\n";
		return 0;
	}
