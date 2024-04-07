#include <cmath>
#include <iostream>

using namespace std;

/*
    Given a five-digit number, check if all its digits are arranged in ascending order, starting from the leftmost digit.
*/

int main() {
    int number;

    cin >> number;
    int a = number / 10000;
    int b = number / 1000 % 10;
    int c = number % 1000 / 100;
    int d = number % 100 / 10;
    int e = number % 10;

    if((number >= 10000 && number <= 99999) && (e > d) && (d > c) && (c > b) && (b > a)) {
    cout << "Ascending" << endl; } else {
        cout << "Not Ascending" << endl;
    }
    return 0;
}
