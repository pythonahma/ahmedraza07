#include <iostream>
#include <string>

using namespace std;

class LectureDetails {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numLectures;

public:
    // Constructor to initialize lecture details
    LectureDetails(string lecturer, string subject, string course) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numLectures = 0;
    }

    // Function to assign initial values
    void assignInitialValues(string lecturer, string subject, string course) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
    }

    // Function to add lecture details
    void addLectureDetails() {
        numLectures++;
    }

    // Function to display lecturer's details
    void displayLectureDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numLectures << endl;
    }
};

int main() {
    // Creating LectureDetails objects for 5 lecturers
    LectureDetails lecturers[5] = {
        LectureDetails("John Doe", "Mathematics", "Advanced Calculus"),
        LectureDetails("Jane Smith", "Physics", "Quantum Mechanics"),
        LectureDetails("Alice Johnson", "Computer Science", "Data Structures"),
        LectureDetails("Bob Williams", "Biology", "Genetics"),
        LectureDetails("Eva Davis", "History", "World War II")
    };

    // Adding lecture details for each lecturer
    for (int i = 0; i < 5; ++i) {
        lecturers[i].addLectureDetails();
    }

    // Displaying details of all lecturers
    for (int i = 0; i < 5; ++i) {
        cout << "\nDetails for lecturer " << i + 1 << ":" << endl;
        lecturers[i].displayLectureDetails();
    }

    return 0;
}

