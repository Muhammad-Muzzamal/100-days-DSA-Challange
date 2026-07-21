#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // dynamic array allocation
    int *ptr = new int;
    *ptr = 5;

    cout << *ptr << endl;

    vector<int> vec;
    vector<int> vec1 = {1, 2, 3, 4, 5, 6};
    vector<int> vec2(5, -1); // filles all values with -1

    cout << "vec : " << vec.size() << endl;
    cout << "vec1 : " << vec1.size() << endl;
    cout << "vec2 : " << vec2.size() << endl;

    // fior each loop
    for (int v : vec1)
    {
        cout << v << " ";
    }

    cout << endl;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    
    return 0;
}