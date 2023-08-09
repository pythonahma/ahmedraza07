//Write a program of structure employee that provides the following information -print and display empno, empname, address and age//

#include <stdio.h>
#include <string.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

// Function to print employee information
void printEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    struct Employee emp;

    // Taking input from the user
    printf("Enter Employee Number: ");
    scanf("%d", &emp.empno);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.empname);

    printf("Enter Address: ");
    scanf(" %[^\n]", emp.address);

    printf("Enter Age: ");
    scanf("%d", &emp.age);

    printf("\nEmployee Information:\n");
    printEmployee(emp);
    return 0;
}

