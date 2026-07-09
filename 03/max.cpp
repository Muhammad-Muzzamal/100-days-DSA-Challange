#include <iostream>
using namespace std;

int largestInArray(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{

    int arr[] = {4, 5, 3, 9, 2};
    int size = sizeof(arr) / sizeof(int);

    cout << largestInArray(arr, size) << endl;

    return 0;
}