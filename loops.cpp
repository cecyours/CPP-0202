/*
 * ============================================
 * LOOPS IN C++ 
 * ============================================
 * 1. for loop
 * 2. while loop
 * 3. do-while loop
 * 4. nested loops
 * 5. break
 * 6. continue
 * ============================================
 */

#include <iostream>
using namespace std;

int main()
{
    cout << "========== 1. FOR LOOP ==========" << endl;
    cout << "Syntax: for(init; condition; increment/decrement)" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Hello " << i << endl;
    }

    cout << "\n========== 2. WHILE LOOP ==========" << endl;
    int i = 1;
    while (i <= 10)
    {
        cout << "Hello " << i << endl;
        i++;
    }

    cout << "\n========== 3. DO-WHILE LOOP ==========" << endl;
    int j = 1;
    do
    {
        cout << j << endl;
        j++;
    } while (j <= 5);

    cout << "\n========== 4. NESTED LOOPS (4x4 star pattern) ==========" << endl;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n========== 5. BREAK (stops at 5) ==========" << endl;
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
            break;
        cout << "Hello " << i << endl;
    }

    cout << "\n========== 6. CONTINUE (skips 5) ==========" << endl;
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue;
        cout << "Hello " << i << endl;
    }

    return 0;
}
