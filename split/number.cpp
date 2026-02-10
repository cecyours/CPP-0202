#include "number.h"
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

void printArray(double *start, double *end)
{

    cout << fixed << setprecision(2);

    for (double *p = start; p <= end; p++)
    {
        if (p != start)
        {
            cout << " ";
        }
        cout << *p;
    }
    cout << endl;
}

double *sortAndSplit(double *start, double *end, double threshold)
{
    double *left = start;
    double *right = end;

    while (left <= right)
    {
        // move left until wrong element found
        while (left <= right && *left < threshold)
        {
            left++;
        }

        // move right until wrong element found
        while (left <= right && *right >= threshold)
        {
            right--;
        }

        if (left < right)
        {
            swap(*left, *right);
            left++;
            right--;
        }
    }

    if (left > end)
        return nullptr;

    return left;
}
