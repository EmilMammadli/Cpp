#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N (N <= 1000), find all natural numbers not exceeding N that can be expressed as the sum of the squares of two distinct natural numbers.
*/

int main() {
    int N;
  cin >> N;

  int i;
  int a;
  int c;

  for(i = 1; i <= N; i++){
    for(a = i + 1; a <= N; a++){
      if(pow(i, 2) + pow(a, 2) <= N){
        c = pow(i, 2) + pow(a, 2);
        cout << i << "^" << 2 << " + " << a << "^" << 2 << " = " << c << endl;
      }
    }
  }  
    return 0;
}
