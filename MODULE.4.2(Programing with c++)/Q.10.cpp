/*Write a program to concatenate the two strings using Operator Overloading*/
#include<iostream>
#include<cstring>
using namespace std;

class StringConcatenator{
	private:
		char *str;
		
		public:
			StringConcatenator(const char *s= " "){
				str = new char[strlen(s)+1];
				strcpy(str,s);
			}
			
			StringConcatenator operator+(const StringConcatenator &other){
				char *newStr =new char[strlen(str)+ strlen(other.str)+1];
				strcpy(newStr,str);
				strcat(newStr,other.str);
				StringConcatenator result(newStr);
				delete[] newStr;
				return result;
			}
			
			void display(){
				cout<<"Concatenated String:  "<<str <<endl;
			}
			
			~StringConcatenator() {
        delete[] str;
    }
			
};

int main(){
	StringConcatenator str1("Hello ");
	StringConcatenator str2("world! ");
	
	StringConcatenator concatenatedStr = str1 + str2;
	
	concatenatedStr.display();
	
	return 0;
}
