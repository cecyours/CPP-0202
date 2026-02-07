#include <iostream>
#include "prime.h"

using namespace std;

int main()
{

    int index;

    do
    {
        cout << "Computing the n-th prime number! Please enter n: ";
        cin >> index;
        
    cout << "The " << index << "th is prime number : "
         << primeNumber(index) << endl;

    } while (index != 0);


    return 0;
}