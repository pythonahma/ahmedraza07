/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance)*/
#include<iostream>
#include<string>
using namespace std;

class Student{
	protected:
	int rollNumber;
	
	public:
		void inputstudentDetails(){
			cout<<"Enter Roll Number: ";
			cin>>rollNumber;
		}
};
class Test:public Student{
	protected:
		int marksSubject1;
		int marksSubject2;
	
	public:
		void inputTestMarks(){
			cout<<"Enter marks obtained in sub1:";
			cin>>marksSubject1;
			cout<<"Enter marks obtained in sub2:";
			cin>>marksSubject2;
		}
};

class Result:public Test{
	private:
	int totalMarks;
	
	public:
		void calculateTotalMarks(){
			totalMarks=marksSubject1+marksSubject2;
			
		}
		
		void displayResult(){
			cout<<"\n Student Roll Number: "<<rollNumber<<endl;
			cout<<"Marks in subject1: "<< marksSubject1<<endl;
			cout<<"Marks in subject2: "<<marksSubject2<<endl;
			cout<<"Total Marks: "<<totalMarks<<endl;	
		}
};

int main(){
	Result result;
	
	cout<<"Enter Student Details: "<<endl;
	result.inputstudentDetails();
	
	cout<<"Enter Test Marks"<<endl;
	result.inputTestMarks();
	
	result.calculateTotalMarks();
	
	cout<<"\n Student Test Result: "<<endl;
	result.displayResult();
	return 0;
}
