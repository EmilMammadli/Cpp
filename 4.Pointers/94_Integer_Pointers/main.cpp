#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program that performs the following steps:

    Ask the user to enter two integer values 'a' and 'b'.
    Declare two integer variables a and b.
    Declare two integer pointers ptrA and ptrB.
    Assign the values of a and b to ptrA and ptrB respectively.
    Display the values stored in ptrA and ptrB.
*/

int main()
{

    int a;
    cin >> a;
    int b;
    cin >> b;

    int *ptrA = &a;
    int *ptrB = &b;

    cout << "Value of ptrA: " << *ptrA << endl;
    cout << "Value of ptrB: " << *ptrB << endl;
    return 0;
}
