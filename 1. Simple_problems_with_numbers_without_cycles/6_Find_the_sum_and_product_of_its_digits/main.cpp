#include <cmath>
#include <iostream>

using namespace std;

/*
    A two-digit integer is given. Find the sum and product of its digits.
*/

int main() {
    int number;

   cin >> number;

   if(number >= 10 || number <= 99){
    cout << "Sum of the digits: " << (number / 10) + (number % 10) << endl;
    cout << "Product of the digits: " << (number / 10) * (number % 10) << endl;
   }  
    return 0;
}