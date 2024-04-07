#include <cmath>
#include <iostream>

using namespace std;

/*
    Given a three-digit integer, rearrange the tens and ones digits of the number without changing the hundreds digit. Print the resulting number.
*/

int main() {
    int number;
    
    cin >> number;

    
    if((number >= 100) && (number <= 999)){
        cout << (number / 100) << ((number % 100) % 10) << ((number % 100) / 10) << endl;
    }   
    return 0;
}
