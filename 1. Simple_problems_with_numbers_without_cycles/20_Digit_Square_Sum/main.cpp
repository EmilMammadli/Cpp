#include <cmath>
#include <iostream>

using namespace std;

/*
    Given a five-digit number, calculate the sum of the squares of its digits.

*/


int main() {
    int number = 12345;
    cin >> number;
    int a = number / 10000;
    int b = number / 1000 % 10;
    int c = number % 1000 / 100;
    int d = number % 100 / 10;
    int e = number % 10;
    int result = pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2) + pow(e, 2);

   

    if(number >= 10000 && number <= 99999){
    cout << result << endl; }
   
    return 0;
}
