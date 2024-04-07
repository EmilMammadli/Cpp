#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, find the number of odd digits in this number.
*/

int main() {
    int number;
    int digit;
    int count = 0;

    cin >> number;

    while(number > 0){
        digit = number % 10;
        if(digit % 2 != 0){
            count++;
        }
        number = number / 10;
    }

    cout << count << endl;
    return 0;
}
