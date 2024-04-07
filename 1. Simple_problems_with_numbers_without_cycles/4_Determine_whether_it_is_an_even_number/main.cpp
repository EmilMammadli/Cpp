#include <cmath>
#include <iostream>
using namespace std;

/*
    A two-digit integer is given. Determine whether it is an even number.
*/

int main() {
    
    int number;

    cin >> number;

    if(number % 2 == 0){
        cout << "The number is even." << endl;
    } else{
        cout << "The number is not even." << endl;
    }
    return 0;
}
