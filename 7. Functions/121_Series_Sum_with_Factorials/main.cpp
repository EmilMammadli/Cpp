#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program that takes a number 'n' as input and calculates the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + ... + n!/n using two different functions: one for calculating factorial and another for summing the series.
*/

int calcFact(int x)
{
    int division = x;
    int y = 1;
    for (int i = 1; i <= x; i++)
    {
        y = y * i;
    }
    int facDiv = y / division;
    return facDiv;
}

int sumFact(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum = sum + calcFact(i);
    }
    return sum;
}

int main()
{
    int number;
    cin >> number;

    cout << sumFact(number) << endl;
    return 0;
}
