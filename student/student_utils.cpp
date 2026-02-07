#include <iostream>
#include "student_utils.h"

using namespace std;

void printMarks(int marks[], int n) {
    cout << "Marks are: ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
}

float calculateAvg(int marks[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }
    return (float)sum / n;
}

int findTopper(int marks[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}
