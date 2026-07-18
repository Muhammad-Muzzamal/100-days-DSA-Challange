#include <iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int arr[], int size)
{
    int maxSum = INT_MIN;
    int sum = 0;

    for(int i=0; i<size; i++) {
        sum += arr[i];
        if(sum < 0) {
            sum = 0;
        }
        maxSum = max(sum, maxSum);
    }

    return maxSum;
}

int main()
{
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int size = sizeof(arr) / sizeof(int);

    int maxSum = maxSubArraySum(arr, size);

    cout << "Maximum SubArray : " << maxSum << endl;
    return 0;
}