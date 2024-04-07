#include <cmath>
#include <iostream>

using namespace std;

/*
    Given a five-digit number, determine whether it is a palindrome. A palindrome number reads the same forward and backward.
*/

int main() {
    
    int number = 12321;
    cin >> number;

    if((number >= 10000 && number <= 99999) && (((number / 10000) + (number / 1000 % 10)) - ((number % 100 / 10) + (number % 100 % 10)) == 0)){
    cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    } 
    return 0;
}
