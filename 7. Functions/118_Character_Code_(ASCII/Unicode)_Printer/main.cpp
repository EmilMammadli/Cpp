#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ function that takes a character as input and prints its ASCII code (or Unicode code) and the corresponding character for that code.
*/

void charFunction(char x)
{
    cout << "The ASCII value of " << x << " is: " << (int)x << endl;
    cout << "The character for the ASCII value " << (int)x << " is: " << x << endl;
}
int main()
{
    char character;
    cin >> character;

    charFunction(character);
    return 0;
}
