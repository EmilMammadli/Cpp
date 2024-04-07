#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a four-digit integer, check if it is an Armstrong number.

    An Armstrong number is a number where the sum of the fourth powers of its digits is equal to the number itself. Ex: 1634 = 1^4 + 6^4 + 3^4 + 4^4
*/

int main() {
    int number;

    cin >> number;
    int a = number / 1000;
    int b = number / 100 % 10;
    int c = number % 100 / 10;
    int d = number % 10;
    int power = pow(a, 4) + pow(b, 4) + pow(c, 4) + pow(d, 4);
    bool result = number == power;

    if((number >= 1000 && number <= 9999) && result){
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not Armstrong Number" << endl;
    }  
    return 0;
}
