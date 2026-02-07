// a function calling itself is called recursion.

#include <iostream>

using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    cout << "Calculating " << n  << " with " << n - 1 << "\n";  
    return n * fact(n - 1);
}

// factorial of 5 = 5 X 4 X 3 X 2 X 1 = 120

int main()
{
    cout << fact(5);
}