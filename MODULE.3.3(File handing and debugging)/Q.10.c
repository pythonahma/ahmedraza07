//  Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age//
#include<stdio.h>
#include<string.h>

struct Employee{
  int empno;
  char empname[50]	;
  char address[100];
  int age;
  
};

void printEmployee(struct Employee emp){
	printf("Employee number: %d\n",emp.empno);
	printf("Employee name: %s\n",emp.empname);
	printf("Address: %s\n",emp.address);
	printf("Age: %d\n",emp.age);
	printf("\n");
	
}

int main(){
	int i;
	struct Employee employees[5];
	printf("Enter information for five employees:\n");
	
	for(i=0;i<5;i++){
		printf("Employee %d:\n",i+1);
		
		printf("Enter Employee Number: ");
        scanf("%d", &employees[i].empno);
        
          printf("Enter Employee Name: ");
        scanf(" %[^\n]", employees[i].empname);
        
         printf("Enter Address: ");
        scanf(" %[^\n]", employees[i].address);
                
        printf("Enter Age: ");
        scanf("%d", &employees[i].age);
	}
	
	printf("\n Employee Information: \n");
	for(i=0;i<5;i++){
		printf("Employee %d:\n",i+1);
		printEmployee(employees[i]);
	}
}
