#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a five-digit number, check if there are any identical digits in the number.
*/

int main() {
    int number;

    cin >> number;
    int a = number / 10000;
    int b = number / 1000 % 10;
    int c = number % 1000 / 100;
    int d = number % 100 / 10;
    int e = number % 10;
    bool result1 = (a == b) || (a == c) || (a == d) || (a == e);
    bool result2= (b == a) || (b == c) || (b == d) || (b == e);
    bool result3 = (c == a) || (c == b) || (c == d) || (c == e);
    bool result4 = (d == a) || (d == b) || (d == c) || (d == e);
    bool result5 = (e == a) || (e == b) || (e == c) || (e == d);
    bool result = (result1 || result2 || result3 || result4 || result5);

    if((number >= 10000 && number <= 99999) && result){
        cout << "Identical Digits Found" << endl;
    } else {
        cout << "No Identical Digits" << endl;
    }
    return 0;
}
