#include "triangle.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

int main()
{
    const int size = 16;
    int field[size][size];
    initTriangle(field);

    fillTriangle(field);
    for (int i = 0; i < 16; i++)
        printNumbers(field[i], 16);

    // for (int i = 0; i < 16; i++)
        // printAsterisks(field[i], 16);
}