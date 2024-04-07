#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, find the sum of its digits.
*/


int main() {
     int number;
    int digit;
    int sum = 0;

    cin >> number;
    while (number != 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    cout << sum << endl;  
    return 0;
}
