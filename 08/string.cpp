#include <iostream>
using namespace std;
int main()
{
    cout << "Character Array\n";
    cout << "===============\n";

    char str[5] = {'a', 'b', 'c', 'd', 'e'};
    int n = sizeof(str) / sizeof(char);

    for (int i = 0; i < n; i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    return 0;
}