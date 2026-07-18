#include <iostream>
#include<climits>
using namespace std;
void printSubArray(int arr[], int size) {
    int maxSum = INT_MIN;
    int sum = 0;
    for (int start = 0; start < size; start++) {
        for (int end = start; end < size; end++) {
            for (int k = start; k <= end; k++) {
                cout << arr[k] << " ";
                sum += arr[k];
            }
            cout << "= " << sum;
            maxSum = max(sum, maxSum);
            cout << endl;
        }
    }
    cout << "Maximum Sum : " << maxSum << endl;
}
int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);

    printSubArray(arr, n);
    return 0;
}