#include <iostream>

using namespace std;

int getSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int getMin(int arr[], int size)
{
    int min = arr[0]; // 9

    // 5 times

    // 65 = false , 15 = true , 77 = false , 9 = true , 10 = false
    for (int i = 0; i < size; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int getMax(int arr[], int size)
{
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

// try to do with for loop
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

bool find(int arr[], int size, int num)
{
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            found = true; 
            break;
        }
    }

    return found;
}

int main()
{
    int arr[5] = {65, 15, 77, 9, 10};

    // cout << getSum(arr, 4);

    // cout << getMin(arr, 4);

    // cout << getMax(arr, 4);

    // reverse(arr, 5);

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int num;
    cout << "Enter a number want to find : ";
    cin >> num;

    cout << find(arr, 5, num);

    return 0;
}



// pointers 