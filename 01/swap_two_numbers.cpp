#include <iostream>
using namespace std;

void swap(int *num1, int *num2)
{
    
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void swap_without_third_variable(int *num1, int *num2){
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}

int main()
{
    int num1 = 10, num2 = 20;
    cout << "Before swaping \n";
    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;
    swap_without_third_variable(&num1, &num2);
    cout << "After swaping \n";
    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;
    return 0;
}