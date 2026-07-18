#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int s = 0;
    int e = size - 1;

    while(s <= e) {
        int mid = s - (s - e) / 2;
        if(arr[mid] == target) {
            return mid;
        } else if(arr[mid] > target) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int n = sizeof(arr) / sizeof(int);
    int target = 70;
    
    int index = binarySearch(arr, n, target);
    if(index >= 0) {
        cout << "Element found at index " << index << ".\n";
    } else {
        cout << "Element not found\n";
    }
    return 0;
}