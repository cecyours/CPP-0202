/*
 * ============================================
 * Program: Array Input & Display (with +10)
 * ============================================
 * Description: Takes array size and elements from user,
 *              then prints each element plus 10.
 * Purpose:     Learn arrays, loops, and user input in C++.
 * ============================================
 */

#include <iostream>
using namespace std;

int main()
{
    // -----------------------------------------
    // STEP 1: Get the size of array from user
    // -----------------------------------------
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    // -----------------------------------------
    // STEP 2: Create array dynamically (valid C++)
    // Note: int arr[n] is not standard C++; we use new[]
    // -----------------------------------------
    int* arr = new int[n];

    // -----------------------------------------
    // STEP 3: Read array elements from user
    // -----------------------------------------
    cout << "\nEnter the elements of array (one per line or space-separated):\n";
    for (int i = 0; i < n; i++)
    {
        cout << "  Element [" << i << "]: ";
        cin >> arr[i];
    }

    // -----------------------------------------
    // STEP 4: Display original array elements
    // -----------------------------------------
    cout << "\nOriginal array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "  " << arr[i];
    }
    cout << endl;

    // -----------------------------------------
    // STEP 5: Display array elements + 10
    // -----------------------------------------
    cout << "\nArray elements (each + 10):\n";
    for (int i = 0; i < n; i++)
    {
        cout << "  " << (arr[i] + 10);
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}

/*
 * ============================================
 * SAMPLE RUN:
 * ============================================
 * Enter the size of array: 3
 *
 * Enter the elements of array (one per line or space-separated):
 *   Element [0]: 5
 *   Element [1]: 10
 *   Element [2]: 15
 *
 * Original array elements:
 *   5  10  15
 *
 * Array elements (each + 10):
 *   15  20  25
 * ============================================
 */
