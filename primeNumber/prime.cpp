#include <iostream>
#include "prime.h"

using namespace std;

bool isPrime(int number)
{

    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int primeNumber(int n)
{
    int count = 0;
    int number = 1;

    while (count < n)
    {
        number++;
        if (isPrime(number))
        {
            count++;
        }
    }

    return number;
}