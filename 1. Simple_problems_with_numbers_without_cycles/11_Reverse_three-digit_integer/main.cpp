#include <cmath>
#include <iostream>

using namespace std;

/*
    Given a three-digit integer, reverse the digits of the number.
*/

int main() {
    int number;
    
    cin >> number;


    if((number >= 100) && (number <= 999)){
        cout << ((number % 100) % 10) << ((number % 100) / 10) << (number / 100) << endl;
    }
   
    return 0;
}
