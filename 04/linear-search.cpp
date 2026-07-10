#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {10, 25, 8, 42, 15, 67, 31};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    // Write your linear search here
    int ans = linearSearch(arr, n, target);
    if(ans >= 0) {
        cout << "Target are found on index : " << ans << endl;
    } else {
        cout << "Target not Found\n";
    }

    return 0;
}