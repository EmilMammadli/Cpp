#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program that takes a decimal number as input and converts it to a binary number using a function. Display the binary value.
*/

void binConvert(int n)
{

    int array[32]; // int == 4 byte

    int i = 0; // define how many division to 2

    while (n > 0)
    {
        array[i] = n % 2; // changing number to 1 and 0
        n = n / 2;
        i++; // counting
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << array[j];
    }
}

int main()
{
    int number;
    cin >> number;

    binConvert(number);

    return 0;
}
