#include "number.h"
#include <iostream>

using namespace std;

int main()
{
    // Initialization
    double numbersIt[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    double numbersRec[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    double threshold = 4.0;

    // Task 1
    cout << "Iterative Version:" << endl;
    cout << "Original Array: \t";
    double *endIt = numbersIt + 9;
    printArray(numbersIt, endIt);

    // Task 2
    double *centerIt = sortAndSplit(numbersIt, endIt, threshold);
    cout << "Rearranged Array: \t";
    printArray(numbersIt, endIt);
    cout << "Front: \t";
    printArray(numbersIt, centerIt - 1);
    cout << "Back: \t";
    printArray(centerIt, endIt);
    /*
     */
    // Task 3
    /*
    cout << endl;
    cout << "Recursive Version:" << endl;
    cout << "Original Array: \t";
    double * endRec = numbersRec+9;
    printArray(numbersRec, endRec);
    double * centerRec = sortAndSplitRecursive(numbersRec,endRec,threshold);
    cout << "Rearranged Array: \t";
    printArray(numbersRec, endRec);
    cout << "Front: \t";
    printArray(numbersRec, centerRec-1);
    cout << "Back: \t";
    printArray(centerRec, endRec);
    */
    return 0;
}
