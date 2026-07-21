#include <iostream>
using namespace std;

void reverse(char str[], int n)
{
    int start = 0;
    int end = n - 2;
    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main()
{
    char str[] = "code";
    int n = sizeof(str) / sizeof(char);

    cout << str << endl;

    reverse(str, n);

    cout << str << endl;
    return 0;
}