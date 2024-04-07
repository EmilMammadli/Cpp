#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    You are given the length and width of a rectangle. Write a C++ program to calculate its area and perimeter.
*/

int recPerimeter(int x, int y)
{
    return (x + y) * 2;
}

int recArea(int x, int y)
{
    return x * y;
}

int main()
{
    int length;
    cin >> length;
    int width;
    cin >> width;

    cout << "The area of the rectangle is: " << recArea(length, width) << endl;
    cout << "The perimeter of the rectangle is: " << recPerimeter(length, width) << endl;
    return 0;
}
