#include <iostream>
using namespace std;
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 12, 7, 19, 3, 8, 15, 10};
    int size = sizeof(arr) / sizeof(int);

    cout << "Before :\n";
    printArray(arr, size);

    reverseArray(arr, size);
    
    cout << "After :\n";
    printArray(arr, size);
    return 0;
}