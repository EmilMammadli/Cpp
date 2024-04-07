#include <cmath>
#include <iostream>

using namespace std;

/*
    Given a three-digit integer, remove the rightmost digit and prepend it to the left side of the number. Print the resulting number.
*/

int main()
{
    int number;

    cin >> number;

    if ((number >= 100) && (number <= 999))
    {
        cout << ((number % 100) % 10) << (number / 100) << ((number % 100) / 10) << endl;
    }
    return 0;
}
