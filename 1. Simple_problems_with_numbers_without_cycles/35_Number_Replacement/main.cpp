#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given two real numbers X and Y, check if X is less than or equal to Y. If it is, replace X with zero. Otherwise, leave the numbers unchanged.
*/

int main() {
      float X;
    float Y;

    cin >> X;
    cin >> Y;

    bool result = X <= Y;

    if(result){
        cout << 0 << " " << Y << endl;
    }else{
        cout << X << " " << Y << endl;
    }
    return 0;
}
