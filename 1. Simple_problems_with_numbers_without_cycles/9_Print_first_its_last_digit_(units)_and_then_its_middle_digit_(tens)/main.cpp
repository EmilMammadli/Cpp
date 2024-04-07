#include <cmath>
#include <iostream>

using namespace std;

/*
    A three-digit integer is given. Print first its last digit (units), and then its middle digit (tens).
*/


int main() {
    int number;

    cin >> number;


    if((number >= 100) && (number <= 999)){
        cout << "Last digit (units): " << (number % 100) % 10 << endl;
        cout << "Middle digit (tens): " << (number % 100) / 10 << endl; 
    }
    return 0;
}
