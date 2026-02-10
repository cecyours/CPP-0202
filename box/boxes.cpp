#include "boxes.h"
#include <iostream>
#include <algorithm>

using namespace std;

bool readBox(int box[])
{

    cout << "Enter the length , width and height";
    cin >> box[0] >> box[1] >> box[2];

    if (cin.fail() || box[0] <= 0 || box[1] <= 0 || box[2] <= 0)
    {
        return false;
    }

    return true;
}

double calculateLiter(const int box[])
{

    double volumeMm3 = static_cast<double>(box[0]) * box[1] * box[2];
    return volumeMm3 / 1000000.0;
}

bool fitsInto(int outerBox[], int innerBox[])
{
    // Make sorted copies so we don't modify the originals
    int outer[3] = {outerBox[0], outerBox[1], outerBox[2]};
    int inner[3] = {innerBox[0], innerBox[1], innerBox[2]};

    sort(outer, outer + 3);
    sort(inner, inner + 3);

    return (inner[0] < outer[0]) &&
           (inner[1] < outer[1]) &&
           (inner[2] < outer[2]);
}