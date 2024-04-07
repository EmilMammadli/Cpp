#include <cmath>
#include <iostream>

using namespace std;

/*
    A three-digit integer is given. Find the sum and product of its digits.
*/

int main() {
     int number;
    
    cin >> number;


    if((number >= 100) && (number <= 999)){
        cout << "Sum of the digits: " << (number / 100) + ((number % 100) / 10) + ((number % 100) % 10) << endl;
        cout << "Product of the digits: " << (number / 100) * ((number % 100) / 10) * ((number % 100) % 10) << endl; 
    }
    return 0;
}