#include <iostream>
using namespace std;

void display2D_Array(int arr[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[i][col] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    display2D_Array(arr, 3);

    return 0;
}