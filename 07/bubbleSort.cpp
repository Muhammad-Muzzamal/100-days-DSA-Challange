#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // int arr[] = {5, 1, 4, 2, 8};
    // int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);

    cout << "Before Sorting\n";
    displayArray(arr, size);
    bubbleSort(arr, size);

    cout << "After Sorting\n";
    displayArray(arr, size);

    return 0;
}