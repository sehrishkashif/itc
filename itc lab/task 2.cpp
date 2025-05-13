#include <iostream>
using namespace std;

int sumArray(int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}

int main2() 
{
    int myArray[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int result = sumArray(myArray, size);

    cout << "Sum of array elements: " << result << endl;

    return 0;
}
