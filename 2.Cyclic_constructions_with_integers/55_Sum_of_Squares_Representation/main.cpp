#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, determine if it can be expressed as the sum of the squares of two distinct natural numbers.
*/


int main() {
     int N;
  cin >> N;

  int a = 1;
  int b = 1;
  bool flag = false;

  for(a = 1; a <= N; a++){
    for(b = 1; b <= N; b++){
      if(a*a + b*b == N){
         flag = true;
      }
    }
  }

  if(flag == true){
    cout << "YES" << endl;
  }else if(flag == false){
    cout << "NO" << endl;
  } 
    return 0;
}
