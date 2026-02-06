#include <iostream>

using namespace std;

int main()
{

    // int arr[3] = {1, 2 , 3, 4}

    // cout << arr[3]

    int arr[3][4] = {
        {1, 2, 3, 4},   // 0
        {5, 6, 7, 8},   // 1
        {9, 10, 11, 12} // 2
    };


    // assum 3 as row and 4 as column

    // cout << arr[1][2];

    int (*p)[4] = arr;

    cout << p[1][2];  // 7

    cout << '-';





    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << '-';
    //     }
    // }

    return 0;
}