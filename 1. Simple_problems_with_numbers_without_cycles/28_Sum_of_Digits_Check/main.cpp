#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a four-digit integer, check if the sum of its digits is a multiple of both 2 and 3.
*/

int main() {
    int number;

    cin >> number;
    int a = number / 1000;
    int b = number / 100 % 10;
    int c = number % 100 / 10;
    int d = number % 10;
    int sum = a + b + c + d;
    bool result1 = (sum % 2) == 0;
    bool result2 = (sum % 3) == 0;
    bool result = result1 && result2;

    if((number >= 1000 && number <= 9999) && result){
        cout << "Multiple of 2 and 3" << endl;
    } else {
        cout << "Not a Multiple of 2 and 3" << endl;
    }  
    return 0;
}
