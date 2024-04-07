#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write three C++ functions: convertToHex, convertToBinary, and convertToOctal. Each function should take an integer as input and return a string representing the number in hexadecimal, binary, and octal formats, respectively.


    Input Format:

    Each function takes an integer as input.
*/

string convertToBinary(int num)
{
    string binary = "";
    while (num > 0)
    {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    return binary;
}

string convertToHex(int num)
{
    string hex = "";
    while (num > 0)
    {
        if (num % 16 < 10)
        {
            if (num % 16 == 0)
            {
                hex = "0" + hex;
            }
            else if (num % 16 == 1)
            {
                hex = "1" + hex;
            }
            else if (num % 16 == 2)
            {
                hex = "2" + hex;
            }
            else if (num % 16 == 3)
            {
                hex = "3" + hex;
            }
            else if (num % 16 == 4)
            {
                hex = "4" + hex;
            }
            else if (num % 16 == 5)
            {
                hex = "5" + hex;
            }
            else if (num % 16 == 6)
            {
                hex = "6" + hex;
            }
            else if (num % 16 == 7)
            {
                hex = "7" + hex;
            }
            else if (num % 16 == 8)
            {
                hex = "8" + hex;
            }
            else if (num % 16 == 9)
            {
                hex = "9" + hex;
            }
        }
        else if (num % 16 >= 10)
        {
            if (num % 16 == 10)
            {
                hex = "A" + hex;
            }
            else if (num % 16 == 11)
            {
                hex = "B" + hex;
            }
            else if (num % 16 == 12)
            {
                hex = "C" + hex;
            }
            else if (num % 16 == 13)
            {
                hex = "D" + hex;
            }
            else if (num % 16 == 14)
            {
                hex = "E" + hex;
            }
            else if (num % 16 == 15)
            {
                hex = "F" + hex;
            }
        }
        num /= 16;
    }
    return hex;
}

string convertToOctal(int num)
{
    string octal = "";
    while (num > 0)
    {
        if (num % 8 == 0)
        {
            octal = "0" + octal;
        }
        else if (num % 8 == 1)
        {
            octal = "1" + octal;
        }
        else if (num % 8 == 2)
        {
            octal = "2" + octal;
        }
        else if (num % 8 == 3)
        {
            octal = "3" + octal;
        }
        else if (num % 8 == 4)
        {
            octal = "4" + octal;
        }
        else if (num % 8 == 5)
        {
            octal = "5" + octal;
        }
        else if (num % 8 == 6)
        {
            octal = "6" + octal;
        }
        else if (num % 8 == 7)
        {
            octal = "7" + octal;
        }

        num /= 8;
    }
    return octal;
}
int main()
{
    int number;
    cin >> number;
    if (number == 0)
    {
        cout << "Bin: "
             << "0" << endl;
        cout << "Hex: "
             << "0" << endl;
        cout << "Oct: "
             << "0" << endl;
    }
    else
    {
        cout << "Bin: " << convertToBinary(number) << endl;
        cout << "Hex: " << convertToHex(number) << endl;
        cout << "Oct: " << convertToOctal(number) << endl;
    }

    return 0;
}
