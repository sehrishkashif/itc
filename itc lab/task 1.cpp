#include <iostream>
using namespace std;

void swapValues(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main1() {
    int a = 10;
    int b = 20;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swapValues(&a, &b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
