#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a four-digit integer, check if there are consecutive digits 3 and 7 in the number.
*/

int main() {
    int number;

    cin >> number;
    int a = number / 1000;
    int b = number / 100 % 10;
    int c = number % 100 / 10;
    int d = number % 10;
    bool result1 = (a == 3) && (b == 7);
    bool result2 = (b == 3) && (c == 7);
    bool result3 = (c == 3) && (d == 7);
    bool result = result1 || result2 || result3;

    if((number >= 1000 && number <= 9999) && result){
        cout << "Consecutive Digits Found" << endl;
    } else {
        cout << "Consecutive Digits Not Found" << endl;
    }   
    return 0;
}
