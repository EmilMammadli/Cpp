#include <cmath>
#include <iostream>

using namespace std;

/*
    A three-digit integer is given. Using one division operation entirely, output the first digit of this number (hundreds).
*/

int main() {
    int number;

    cin >> number;

    if((number >= 100) && (number <= 999)){
        cout << number / 100 << endl;
    }
    return 0;
}