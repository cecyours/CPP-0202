#include <iostream>
#include "boxes.h"

using namespace std;

int main()
{
    int box[3];

    // test for read
    bool result = readBox(box);

    // test for calculate Liter#

    if (result)
    {
        std::cout << "Space in l:" << calculateLiter(box);
        std::cout << std::endl;
    }
    else
    {
        std::cout << "No Box" << std::endl;
    }

    // Test for fitsInto

    int box1[] = {50, 60, 30};
    int box2[] = {55, 28, 35};
    std::cout << "box2 > box1 : " << fitsInto(box2, box1) << std::endl; // expected false
    std::cout << "box1 > box2 : " << fitsInto(box1, box2) << std::endl; // expected true
    std::cout << "box1 > box1 : " << fitsInto(box1, box1) << std::endl; // expected false
}
