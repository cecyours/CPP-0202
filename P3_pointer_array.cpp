// a pointer is variable that stores the address of another variable;

#include <iostream>

using namespace std;

void printArray(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {14, 23, 3, 4, 5};
    // arr = pointer
    // in cpp the name of array acts like a pointer
    int *ptr = arr;
    // value of first element of array
    cout << *ptr << '\n';
    // second element
    cout << *(ptr + 1) << '\n';
    cout << "whole array " << '\n';
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << '\n';
    }
    return 0;
}
