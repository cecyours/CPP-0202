// a pointer is variable that stores the address of another variable;

#include <iostream>

using namespace std;

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        // cout << arr[i] << " ";
        cout << *(arr + i) << " ";
    }
}

void doubleArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int sumArray(int *arr, int size)

{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }

    return sum;
}

int main()
{
    int arr[5] = {14, 23, 3, 4, 5};
    // arr = pointer

    // in cpp the name of array acts like a pointer
    int *ptr = arr;

    // value of first element of array
    // cout << *ptr << '\n';

    // second element
    // cout << *(ptr + 1) << '\n';

    // printArray(arr, 5);
    // cout << "------" ;
    // doubleArray(arr, 5);
    // printArray(arr, 5);

    // int arr[5] = {14, 23, 3, 4, 5};

    // 4 bytes

    cout << *ptr;

    cout << "------";

    ptr++;
    ptr++;
    ptr++;
    cout << *ptr;

    cout << "------";

    cout << sumArray(arr, 5);

    return 0;
}
