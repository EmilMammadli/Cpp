#include <cmath>
#include <iostream>

using namespace std;

/*
    A two-digit integer is given. Print first its left digit (tens), and then its right digit(ones). To find tens, use the division operation entirely, to find units, use the operation of taking the remainder of the division.
*/

int main() {
    
   int number;
   
   cin >> number;

   if(number >= 10 || number <= 99){
    cout << "Left digit: " << number / 10 << endl;
    cout << "Right digit: " << number % 10 << endl;
   }   
    return 0;
}