#include <iostream>
#include <climits>
using namespace std;
void printSubArray(int arr[], int size)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < size; start++)
    {
        int sum = 0;
        for (int end = start; end < size; end++)
        {
            sum += arr[end];
            maxSum = max(sum, maxSum);
        }
    }
    cout << "Maximum Sum : " << maxSum << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);

    printSubArray(arr, n);
    return 0;
}