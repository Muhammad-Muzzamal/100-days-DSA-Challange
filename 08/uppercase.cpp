#include <iostream>
using namespace std;
void upperCase(char name[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            continue;
        }else {
            name[i] = name[i] - 'a' + 'A';
        }
    }
    cout << name << endl;
}
int main()
{
    char name[] = "MuZammAl";
    int size = sizeof(name) / sizeof(char);

    cout << name << endl;
    upperCase(name, size);

    return 0;
}