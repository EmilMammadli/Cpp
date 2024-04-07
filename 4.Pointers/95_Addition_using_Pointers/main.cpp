#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program to perform the following steps:

    Declare two integer variables num1 and num2.
    Declare two integer pointer variables ptr1 and ptr2.
    Ask the user to enter two integer values for num1 and num2.
    Assign the memory addresses of num1 and num2 to ptr1 and ptr2 respectively.
    Use pointer arithmetic to access the values pointed to by ptr1 and ptr2.
    Add the values and store the result in a variable sum.
    Display the sum of the two numbers.
*/

int main()
{
    int num1;
    int num2;

    int *ptr1 = nullptr;
    int *ptr2 = nullptr;

    cin >> num1;
    cin >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    int sum = *ptr1 + *ptr2;

    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    return 0;
}
