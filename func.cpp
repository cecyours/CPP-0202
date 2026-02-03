/*
 * Functions: add, subtract, multiply, divide
 */

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b)
{
    return (double)a / b;
}

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Sum: " << add(a, b) << endl;
    cout << "Difference: " << subtract(a, b) << endl;
    cout << "Product: " << multiply(a, b) << endl;
    cout << "Quotient: " << divide(a, b) << endl;

    return 0;
}
