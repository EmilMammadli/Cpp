#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a four-digit integer, check if it is divisible by all its digits.
*/


int main() {
    int number;

    cin >> number;
    int a = number / 1000;
    int b = number / 100 % 10;
    int c = number % 100 / 10;
    int d = number % 10;
    bool result1 = (number % a) == 0;
    bool result2 = (number % b) == 0;
    bool result3 = (number % c) == 0;
    bool result4 = (number % d) == 0;
    bool result = result1 && result2 && result3 && result4;

    if((number >= 1000 && number <= 9999) && result){
        cout << "Divisible by All Digits" << endl;
    } else {
        cout << "Not Divisible by All Digits" << endl;
    } 
    return 0;
}
