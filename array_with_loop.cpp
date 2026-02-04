#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter Number of row : ";
    cin >> n;

    // 1 to 10
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i ; space++)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}