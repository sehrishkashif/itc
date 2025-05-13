#include <iostream>
using namespace std;

void reverseString(char* str) 
{
    int len = 0;
    while (str[len] != '\0') 
    {
        len++;
    }

    int i = 0;
    int j = len - 1;
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main3() 
{
    char myString[] = "hello";

    cout << "Original string: " << myString << endl;

    reverseString(myString);

    cout << "Reversed string: " << myString << endl;

    return 0;
}
