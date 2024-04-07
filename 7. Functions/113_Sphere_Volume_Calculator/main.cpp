#include <cmath>
#include <string>
#include <cstring>
#include <sstream>
#include <iostream>

using namespace std;

/*
    Write a C++ function that calculates the volume of a sphere. Given the radius as input, the function should output the volume of the sphere. The formula to calculate the volume of a sphere is (4/3) * π * r^3, where "r" is the radius of the sphere.
*/

float volSphere(float r)
{
    const float pi = 3.141592;
    float a = 4.0 / 3.0;
    return a * pi * pow(r, 3);
}


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float radius;
    cin >> radius;

    cout << "The volume of a sphere is: " << volSphere(radius) << endl;
    return 0;
}