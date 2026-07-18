#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 12, 7, 19, 3, 8, 15, 10};
    int n = sizeof(arr) / sizeof(int);
    int target = 12;
    int index = linearSearch(arr, n, target);

    if (index >= 0)
    {
        cout << "Element Found at index : " << index << "\n";
    }
    else
    {
        cout << "Element Not Found\n";
    }

    return 0;
}