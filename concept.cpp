#include <iostream>

using namespace std;

// void change(int *x)
// {
//     *x = 100;
// }

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{

    // init  ; condition ; inc/dec

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "Hello " << i << endl;
    // }

    // while

    // int z = 1;
    // while (z <= 5)
    // {
    //     cout << "Hello " << z << endl;
    //     z++;
    // }

    // int j = 1;
    // do
    // {
    //     cout << "do while " << j << endl;
    //     j++;

    // } while (j <= 5);

    // for (int i = 0; i < 3; i++)
    // {
    //     if (i == 1)
    //         continue;

    //     cout << "Hello " << i << endl;
    // }

    // int n;

    // cout << "Enter size";
    // cin >> n;

    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // cout << "All elements are printed\n";

    // int min = arr[0];

    // int key = 39;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == key)
    //     {
    //         cout << "horray";
    //     }
    // }

    // int arr[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}};

    // int arr[3] = {1, 2, 3};

    // int *p = arr;

    // cout << *p << endl;

    // cout << *(p + 1) << endl;

    // cout << *(p + 2) << endl;

    // return 0;

    // int a = 5;

    // cout << a << endl;

    // cout << fact(a);

}