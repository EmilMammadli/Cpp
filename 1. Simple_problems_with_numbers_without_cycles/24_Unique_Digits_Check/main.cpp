#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a four-digit integer, check if all the digits in the number are different from each other.
*/

int main() {
     int number;

    cin >> number;
    int a = number / 1000;
    int b = number / 100 % 10;
    int c = number % 100 / 10;
    int d = number % 10;
    bool result1 = (a != b) && (a != c) && (a != d);
    bool result2= (b != a) && (b != c) && (b != d);
    bool result3 = (c != a) && (c != b) && (c != d);
    bool result4 = (d != a) && (d != b) && (d != c);
    bool result = (result1 && result2 && result3 && result4);

    if((number >= 1000 && number <= 9999) && result){
        cout << "All Digits are Different" << endl;
    } else {
        cout << "Duplicate Digits Found" << endl;
    }
  
    return 0;
}
