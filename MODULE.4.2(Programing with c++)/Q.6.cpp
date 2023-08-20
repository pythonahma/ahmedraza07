/* Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person() : name(""), age(0) {}
    void readPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    float percentage;

public:
    Student() : percentage(0.0) {}
    void readStudentData() {
        readPersonData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }
    void displayStudentData() {
        displayPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
    Teacher() : salary(0.0) {}
    void readTeacherData() {
        readPersonData();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displayTeacherData() {
        displayPersonData();
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter student details:" << endl;
    student.readStudentData();

    cout << "\nEnter teacher details:" << endl;
    teacher.readTeacherData();

    cout << "\nStudent Details:" << endl;
    student.displayStudentData();

    cout << "\nTeacher Details:" << endl;
    teacher.displayTeacherData();

    return 0;
}


