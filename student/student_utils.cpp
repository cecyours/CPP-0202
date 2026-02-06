#include <iostream>
#include "student_util.h"

using namespace std;

void printMarks(int marks[], int size)
{
    cout << "Student Marks";
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;
}

float calculateAvg(int marks[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += marks[i];
    }

    return sum / size;
}

// let's say =  55

// 11 , 23 , 55, 1
int findTopper(int marks[], int size)
{
    int maxMarks = marks[0];

    for (int i = 0; i < size; i++)
    {
        if (marks[i] > maxMarks)
        {
            maxMarks = marks[i];
        }
    }
}