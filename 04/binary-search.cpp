#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start - (start - end) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {5, 12, 18, 25, 31, 42, 56, 67, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 42;

    int idx = binarySearch(arr, n, target);
    if (idx >= 0)
    {
        cout << "Element found at index " << idx << endl;
    }
    else
    {
        cout << "Element not Found\n";
    }

    return 0;
}