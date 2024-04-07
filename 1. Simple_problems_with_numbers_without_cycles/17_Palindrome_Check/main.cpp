#include <cmath>
#include <iostream>

using namespace std;

/*
    Given a four-digit integer, determine whether it is a palindrome. An integer is a palindrome if it reads the same from left to right and from right to left.

    A palindrome number is a number that remains the same when its digits are reversed. In other words, if you read a palindrome number from left to right or right to left, it will be the same. For example, 121, 454, and 1221 are all palindrome numbers because they read the same forward and backward.
*/

int main()
{
    int number;

    cin >> number;

    if (((number >= 1000) && (number <= 9999)) && ((number / 100) == ((number % 100) / 10) + ((number % 100) % 10 * 10)))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}
