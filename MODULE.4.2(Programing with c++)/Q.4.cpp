// Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    Calculator(double a, double b) {
        num1 = a;
        num2 = b;
    }

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Division by zero is not allowed." << endl;
            return 0.0;
        }
    }

    double multiply() {
        return num1 * num2;
    }
};

int main() {
    double a, b;
    
    cout << "Enter 1st  numbers: ";
    cin >> a ;
    cout << "Enter 2nd  numbers: ";
    cin >> b ;

    Calculator calc(a, b);

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Division: " << calc.divide() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;

    return 0;
}
