#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given two real numbers X and Y (Y ≠ X), replace the smaller number with their half-sum, and the larger number with their doubled product.
*/

int main() {
     float X;
   float Y;

   cin >> X;
   cin >> Y;
   bool result1 = X != Y;
   bool result2 = X > Y;
   bool result3 = X < Y;

   if(result1 && result2){
    cout << X * 2 << " " << (X + Y) / 2 << endl;
   }else if(result1 && result3){
    cout << (X + Y) / 2 << " " << Y * 2 << endl;
   }
    return 0;
}
