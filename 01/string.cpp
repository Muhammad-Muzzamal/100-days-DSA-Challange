#include <iostream>
#include "string"
using namespace std;

// total vowels
int count_vowels(string str)
{
    int count = 0;
    for (auto ch : str)
    {
        if (ch == 'a' ||
            ch == 'e' ||
            ch == 'i' ||
            ch == 'o' ||
            ch == 'u')
        {
            count++;
        }
    }
    return count;
}
int count_consonents(string str)
{
    int count = 0;
    for (auto ch : str)
    {
        if (ch == 'a' ||
            ch == 'e' ||
            ch == 'i' ||
            ch == 'o' ||
            ch == 'u')
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    return count;
}
int count_space(string str)
{
    int count = 0;
    for (auto ch : str)
    {
        if (ch == ' ')
            count++;
    }
    return count;
}

int main()
{
    string str = " i igg ";
    cout << count_space(str) << endl;
    return 0;
}