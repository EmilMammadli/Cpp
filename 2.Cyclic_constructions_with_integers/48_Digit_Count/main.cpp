#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, count the number of digits in that number.
*/


int main() {
    int number;
    int count = 0;

    cin >> number;

    while(number != 0){
        number = number / 10;
        count++;
    }

    cout << count << endl;
  
    return 0;
}