#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program that takes a four-digit integer and determines whether the digit 3 is present in the number.
*/


int main() {
    int number;

    cin >> number;
    int a = number / 1000;
    int b = number / 100 % 10;
    int c = number % 100 / 10;
    int d = number % 10;
    bool result = (a == 3) || (b == 3) || (c == 3) || (d == 3);

    if((number >= 1000 && number <= 9999) && result){
        cout << "Digit 3 Found" << endl;
    } else {
        cout << "Digit 3 Not Found" << endl;
    }
  
    return 0;
}
