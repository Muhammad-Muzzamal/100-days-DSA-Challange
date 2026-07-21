#include <iostream>
using namespace std;
int main() {
    char name[] = "Muzzamal";
    int size = sizeof(name) / sizeof(char);
    cout << name << endl;
    cout << "Size : " << size << endl;
    return 0;
}