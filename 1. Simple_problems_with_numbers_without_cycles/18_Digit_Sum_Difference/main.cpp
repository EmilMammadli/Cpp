#include <cmath>
#include <iostream>

using namespace std;

/*
    Given a five-digit number, calculate the difference between the sums of its first two digits and last two digits.
*/

int main() {
    int number;

    cin >> number;

    if(number >= 10000 && number <= 99999){
    cout << ((number / 10000) + (number / 1000 % 10)) - ((number % 100 / 10) + (number % 100 % 10)) << endl;
    }
  
    return 0;
}
