#include <cmath>
#include <iostream>

using namespace std;

/*
    Given an integer greater than 999, find the digit corresponding to the hundreds place in the number using one division operation and one remainder operation. Print the digit.
*/

int main() {
    int number;
    
    cin >> number;
    
    if(number > 999){
        cout << (number / 100) % 10 << endl;
    }  
    return 0;
}
