#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, find the maximum digit present in this number.
*/

int main() {
        int number; 
    int digit; 
    int maxDigit = 0; 
    

    cin >> number;

    while (number > 0)
    {
       digit = number % 10;
       maxDigit = max(maxDigit, digit);
       number = number / 10;
    }

    cout << maxDigit; 
    return 0;
}
