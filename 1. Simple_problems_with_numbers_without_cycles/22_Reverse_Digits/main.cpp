#include <cmath>
#include <iostream>

using namespace std;

/*
    Given a five-digit number, reverse the order of its digits and print the resulting number.
*/

int main() {
    int number;

    cin >> number;
    int a = number / 10000;
    int b = number / 1000 % 10;
    int c = number % 1000 / 100;
    int d = number % 100 / 10;
    int e = number % 10;

    if(number >= 10000 && number <= 99999){
        cout << e << d << c << b << a << endl;
    }  
    return 0;
}
