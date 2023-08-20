/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/
#include <iostream>
using namespace std;

class MathOperations {
public:
  
    int calculate(int a, int b) {
        return a + b;
    }


    double calculate(double a, double b) {
        return a - b;
    }

    
    long calculate(long a, long b) {
        return a * b;
    }


    float calculate(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
    }
};

int main() {
    MathOperations math;

    int num1, num2;
    double num3, num4;
    long num5, num6;
    float num7, num8;

    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

   
    cout << "Addition (int): " << math.calculate(num1, num2) << endl;

    
    cout << "Enter two doubles: ";
    cin >> num3 >> num4;

    
    cout << "Subtraction (double): " << math.calculate(num3, num4) << endl;

  
    cout << "Enter two long integers: ";
    cin >> num5 >> num6;

    
    cout << "Multiplication (long): " << math.calculate(num5, num6) << endl;

   
    cout << "Enter two floats: ";
    cin >> num7 >> num8;

 
    cout << "Division (float): " << math.calculate(num7, num8) << endl;

    return 0;
}

