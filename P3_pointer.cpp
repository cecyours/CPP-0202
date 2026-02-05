// a pointer is variable that stores the address of another variable;

#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int *p = &x;

    // changing value using pointer
    *p = 25;

    // // actual value of x
    cout << x << '\n';

    // // memory address of x  ampersand
    // cout << &x << '\n';

    // // memory address of x
    // cout << p << '\n';   

    // // value of that address
    // cout << *p << '\n';   


    return 0;
}
