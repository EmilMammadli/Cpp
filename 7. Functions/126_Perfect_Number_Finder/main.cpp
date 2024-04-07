#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program that takes a range as input and finds all the perfect numbers within that range using a function. Display the list of perfect numbers.

    Input Format:

    Two integers representing the range: "from" and "to."
*/

void primeChecker(int x, int y)
{

    for (int i = x; i <= y; i++)
    {
        int sum = 0;
        for (int j = 1; j <= y; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum - i == i)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int fromNumber, toNumber;
    cin >> fromNumber >> toNumber;
    cout << "The perfect numbers between " << fromNumber << " to " << toNumber << " are: ";
    primeChecker(fromNumber, toNumber);
    return 0;
}
