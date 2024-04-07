#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program that takes a number as input and checks whether it's even or odd using a function. Display the result.
*/

bool checker(int x)
{
    if (x % 2 == 0)
        return true;
    else
        return false;
}
int main()
{
    int number;
    cin >> number;

    checker(number);

    if (checker(number) == false)
    {
        cout << "The entered number is odd" << endl;
    }
    else
    {
        cout << "The entered number is even" << endl;
    }
    return 0;
}
