#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program that takes a positive number as input and checks whether it is a prime number using a function. Display the result.
*/

bool primeChecker(int x)
{
    int counter = 0;
    bool result;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            counter++;
        }
    }
    if (counter > 2)
    {
        result = false;
    }
    else
    {
        result = true;
    }
    return result;
}
int main()
{
    int number;
    cin >> number;

    if (primeChecker(number) == true)
    {
        cout << "The number " << number << " is a prime number" << endl;
    }
    else
    {
        cout << "The number " << number << " is not a prime number" << endl;
    }

    return 0;
}
