#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, determine if it is a palindrome (reads the same forwards and backwards).
*/


int main(){

 int N;
 cin >> N;

 int a = N; // assign N
 int count = 0; // finding number of digits

 while(a > 0){
   a = a / 10;
   count++;
 } 

  int i;
  int b = N;
  int c = 0; // reverse of N
  
  for(i = 1; i <= count; i++){
    int digit = b % 10;
    b /= 10;
    c = c * 10 + digit; 
  }

  if(c == N){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  

  return 0;
}
    
