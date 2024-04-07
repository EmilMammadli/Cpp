#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, find out how many times its maximum digit occurs in this number.
*/


int main() {

    int number; 
    int digit; 
    int maxDigit = 0;   
    
    cin >> number;
    int i = number;

    while (number > 0)
    {
       digit = number % 10;
       maxDigit = max(maxDigit, digit);
       number /= 10;
    }

    int count = 0;

    while(i > 0){
        digit = i % 10;
        if(digit == maxDigit){
            count++;
        }
        i /= 10;
    }

    cout << count << endl;
    return 0;
}
