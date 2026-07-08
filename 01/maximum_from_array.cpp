#include <iostream>
#include <climits>
using namespace std;

int max(int *arr, int size)
{
    int max_num = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        max_num = max(max_num, (*arr + i));
    }
    return max_num;
}
int min(int *arr, int size)
{
    int min_num = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        min_num = min(min_num, (*arr + i));
    }
    return min_num;
}
int sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += (*arr + i);
    }
    return sum;
}

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int *arr, int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    print(arr, size);
}

void linearSearch(int *arr, int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Target found at index : " << i << endl;
            return;
        }
    }
    cout << "Not Found\n";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    // cout << "Sum : " << sum(arr, size) << endl;
    // reverseArray(arr, size);
    linearSearch(arr, size, 5);

    return 0;
}