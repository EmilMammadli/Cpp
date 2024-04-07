#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/*
    Write a C++ function named convertTo that takes two parameters: a number and a format string ("hex", "oct", "bin"). The function should return the number converted to the specified format. If the format is not provided, it should default to decimal ("dec").

    Input Format:

    An integer representing the number to be converted. A string format parameter indicating the desired format.
*/

string convertTo(int num, string format = "dex")
{
    string result = "";
    if (format == "bin")
    {
        string str = "";
        while (num > 0)
        {
            str = (num % 2 == 0 ? "0" : "1") + str;
            num /= 2;
        }
        result = str;
    }
    else if (format == "hex")
    {
        string str = "";
        while (num > 0)
        {
            if (num % 16 == 0)
            {
                str = "0" + str;
            }
            else if (num % 16 == 1)
            {
                str = "1" + str;
            }
            else if (num % 16 == 2)
            {
                str = "2" + str;
            }
            else if (num % 16 == 3)
            {
                str = "3" + str;
            }
            else if (num % 16 == 4)
            {
                str = "4" + str;
            }
            else if (num % 16 == 5)
            {
                str = "5" + str;
            }
            else if (num % 16 == 6)
            {
                str = "6" + str;
            }
            else if (num % 16 == 7)
            {
                str = "7" + str;
            }
            else if (num % 16 == 8)
            {
                str = "8" + str;
            }
            else if (num % 16 == 9)
            {
                str = "9" + str;
            }
            else if (num % 16 == 10)
            {
                str = "A" + str;
            }
            else if (num % 16 == 11)
            {
                str = "B" + str;
            }
            else if (num % 16 == 12)
            {
                str = "C" + str;
            }
            else if (num % 16 == 13)
            {
                str = "D" + str;
            }
            else if (num % 16 == 14)
            {
                str = "E" + str;
            }
            else if (num % 16 == 15)
            {
                str = "F" + str;
            }
            num /= 16;
        }
        result = str;
    }
    else if (format == "oct")
    {
        string str = "";
        while (num > 0)
        {
            if (num % 8 == 0)
            {
                str = "0" + str;
            }
            else if (num % 8 == 1)
            {
                str = "1" + str;
            }
            else if (num % 8 == 2)
            {
                str = "2" + str;
            }
            else if (num % 8 == 3)
            {
                str = "3" + str;
            }
            else if (num % 8 == 4)
            {
                str = "4" + str;
            }
            else if (num % 8 == 5)
            {
                str = "5" + str;
            }
            else if (num % 8 == 6)
            {
                str = "6" + str;
            }
            else if (num % 8 == 7)
            {
                str = "7" + str;
            }
            num /= 8;
        }
        result = str;
    }
    else
    {
        string str = "";
        str += num;
        result = str;
    }
    return result;
}

int main()
{
    int number;
    cin >> number;
    string convert = "";
    cin >> convert;
    cout << convertTo(number, convert) << endl;

    if (number == 0)
    {
        cout << "Bin: "
             << "0" << endl;
        cout << "Hex: "
             << "0" << endl;
        cout << "Oct: "
             << "0" << endl;
    }
    return 0;
}
