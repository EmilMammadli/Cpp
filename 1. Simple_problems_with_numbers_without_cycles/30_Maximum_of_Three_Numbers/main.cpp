#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given three real numbers X, Y, Z, find and print the maximum of these three numbers.
*/

int main() {
   float number1;
   float number2;
   float number3;

   cin >> number1;
   cin >> number2;
   cin >> number3;

   bool result1 = (number1 > number2) && (number1 > number3);
   bool result2 = (number2 > number1) && (number2 > number3);

   if(result1){
    cout << number1 << endl;
   } else if(result2){
    cout << number2 << endl;
   }else{
    cout << number3 << endl;
   }
 
    return 0;
}
