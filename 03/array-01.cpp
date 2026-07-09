#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter Size of Array : ";
    cin >> n;
    int arr[n];
    cout << sizeof(arr) << endl;
    int array_size = sizeof(arr) / sizeof(int);
    cout << "Array Size : " << array_size << endl;

    // input values
    for (int i = 0; i < array_size; i++)
    {
        cin >> arr[i];
    }
    

    // output an array
    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}