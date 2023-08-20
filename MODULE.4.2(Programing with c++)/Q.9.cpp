/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/
#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int *elements;

public:
    Matrix(int s):size(s) {
        elements = new int[size];
    }

    Matrix operator+(const Matrix &other) {
        if (size != other.size) {
            cout << "Matrix sizes are not compatible for addition." << endl;
            exit(1);
        }

        Matrix result(size);

        for (int i=0;i<size;i++) {
            result.elements[i] = elements[i] + other.elements[i];
        }

        return result;
    }

    
    void inputMatrix() {
        cout << "Enter matrix elements:" << endl;
        for (int i=0;i<size;i++) {
            cin>>elements[i];
        }
    }

    
    void displayMatrix() {
        cout << "Matrix elements:" << endl;
        for (int i =0;i<size;i++) {
            cout<<elements[i] << " ";
        }
        cout << endl;
    }

    
    ~Matrix() {
        delete[] elements;
    }
};

int main() {
    int size;

    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "Enter elements for matrix 1:" << endl;
    matrix1.inputMatrix();

    cout << "Enter elements for matrix 2:" << endl;
    matrix2.inputMatrix();

    Matrix result = matrix1 + matrix2;

    cout << "Resultant matrix after addition:" << endl;
    result.displayMatrix();

    return 0;
}

