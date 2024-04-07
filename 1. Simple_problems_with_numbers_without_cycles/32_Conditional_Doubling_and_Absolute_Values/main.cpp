#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given three real numbers X, Y, Z, check the condition Z ≥ Y ≥ X. If the condition is satisfied, double the values of X, Y, and Z. Otherwise, replace X, Y, and Z with their absolute values.
*/


int main() {

 float number1;
   float number2;
   float number3;

   cin >> number1;
   cin >> number2;
   cin >> number3;

   bool result1 = (number3 >= number2) && (number2 >= number1);
   bool result2 = number1 < 0;
   bool result3 = number2 < 0;
   bool result4 = number3 < 0;


    if(result1){
    cout << number1 * 2 << " " << number2 * 2 << " " << number3 * 2 << endl;
   }else{
        if(result2 && result3 && result4){
            cout << number1 * (-1) << " " << number2 * (-1) << " " << number3 * (-1) << endl;
        }else if(result2 && !result3 && !result4){
            cout << number1 * (-1) << " " << number2 << " " << number3 << endl;
        }else if(result2 && result3 && !result4){
            cout << number1 * (-1) << " " << number2 * (-1) << " " << number3  << endl;
        }else if(!result2 && result3 && result4){
            cout << number1 << " " << number2 * (-1) << " " << number3 * (-1) << endl;
        }else if(result2 && !result3 && result4){
            cout << number1 * (-1) << " " << number2 << " " << number3 * (-1) << endl;
        }else if(!result2 && !result3 && result4){
            cout << number1 << " " << number2 << " " << number3 * (-1) << endl;
        }else{
            cout << number1 << " " << number2 << " " << number3 << endl;
        }
    }
   
    return 0;
}
