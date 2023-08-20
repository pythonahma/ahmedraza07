// Write a program of to sort the array using templates.

#include<iostream>
#include<algorithm>

using namespace std;

template<typename T, size_t N>
void sortArray(T (&arr)[N]) {
	std::sort(arr, arr + N);
}

template<typename T, size_t N>
void printArray(T (&arr)[N]) {
    for (size_t i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
int intArray[] = { 4, 2, 7, 1, 5,3, 6, 9, 8 };
	cout << "Original Array: ";
    printArray(intArray);
    
    sortArray(intArray);

    cout << "Sorted Array: ";
    printArray(intArray);

	return 0;
}

