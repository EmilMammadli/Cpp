#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ function that takes a distance in centimeters as input and converts it into meters and kilometers.
*/

void disConverter(float x)
{
    float meter = x / 100;
    float kilometer = meter / 1000;
    cout << "The distance in meter is: " << meter << endl;
    cout << "The distance in kilometer is: " << kilometer << endl;
}
int main()
{
    float centimeters;
    cin >> centimeters;

    disConverter(centimeters);
    return 0;
}
