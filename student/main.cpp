#include <iostream>
#include "student_utils.h"

using namespace std;

int main()
{
    int n;

    cout << "Enter number of Subject: ";
    cin >> n;

    int marks[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter marks for subject " << i << " : ";
        cin >> marks[i];
        cout << endl;
    }

    printMarks(marks, n);

    cout << "Average marks: "
         << calculateAvg(marks, n) << endl;

    int topperIndex = findTopper(marks, n);
    cout << "Topper marks: " << marks[topperIndex] << endl;

    return 0;
}
