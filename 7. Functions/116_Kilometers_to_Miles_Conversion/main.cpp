#include <cmath>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

/*
    A single floating-point number representing the speed in kilometers per hour.
*/

float mileConvertor(float x)
{
    return x * 0.621371;
}

int main()
{
    float km;
    cin >> km;

    cout << std::setprecision(6) << mileConvertor(km) << " Miles/hr" << endl;

    return 0;
}
