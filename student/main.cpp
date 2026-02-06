#include <iostream>
#include "student_utils.h"

using namespace std;

int main()
{

    // int size;

    // cout << "Enter the size of array" << " :  \n";
    // cin >> size;

    // int marks[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter element " << i << ": ";
    //     cin >> marks[i];
    // }

    int size = 5;
    int marks[size] = {1, 2, 3, 4, 5};

    printMarks(marks, size);

    cout << "Avrage Marks"
         << calculateAvg(marks, size) << endl;

    cout << "Topper"
         << findTopper(marks, size) << endl;

    return 0;
}