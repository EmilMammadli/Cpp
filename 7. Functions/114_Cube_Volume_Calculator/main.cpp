#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
    Write a C++ function that calculates the volume of a cube and a program that utilizes this function. The user will input the side length of the cube, and your program should output the volume.
*/

int calculateCubeVolume(int x)
{
    x = pow(x, 3);
    return x;
}
int main()
{

    int sideLength;
    cin >> sideLength;

    cout << calculateCubeVolume(sideLength) << endl;
    return 0;
}
