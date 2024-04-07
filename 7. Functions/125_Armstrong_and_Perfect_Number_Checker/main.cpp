#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program that takes a positive integer as input and checks whether it is an Armstrong number and whether it is a Perfect number using functions. Display the results for both checks.

    Input Format:

    A single positive integer.
*/

bool armstrongChecker(int x)
{
    int y = x;
    int digitCount = 0;
    while (x > 0)
    {
        x /= 10;
        digitCount++;
    }
    int digit;
    int sum = 0;
    x = y;
    for (int i = 0; i < digitCount; i++)
    {
        digit = x % 10;
        sum = sum + (pow(digit, digitCount));
        x /= 10;
    }
    bool result;
    if (sum == y)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    return result;
}

bool perfectChecker(int x)
{
    int sum = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum = sum + i;
        }
    }
    bool result;
    if (sum == x)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    return result;
}

int main()
{
    int number;
    cin >> number;
    if (armstrongChecker(number) == true)
    {
        cout << "The " << number << " is an Armstrong number." << endl;
    }
    else
    {
        cout << "The " << number << " is not an Armstrong number." << endl;
    }

    if (perfectChecker(number) == true)
    {
        cout << "The " << number << " is a Perfect number." << endl;
    }
    else
    {
        cout << "The " << number << " is not a Perfect number." << endl;
    }
    return 0;
}
