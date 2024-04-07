#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given two real numbers A and B, check if A is greater than B. If it is, print only A. Otherwise, print both A and B.
*/

int main() {
   float A;
   float B;

   cin >> A;
   cin >> B;

   bool result = A > B;

   if(result){
    cout << A << endl;
   } else {
    cout << A << " " << B << endl;
   }
    return 0;
}
