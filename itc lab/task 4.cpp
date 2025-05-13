#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size]; 

    int* ptr = arr; 
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> *ptr; 

        ptr++;

    }

    int sum = 0;
    ptr = arr; 

    for (int i = 0; i < size; i++) {
        sum += *ptr; 

        ptr++; 

    }

    cout << "Sum of array elements: " << sum << endl;

    delete[] arr; 

    return 0;
}
