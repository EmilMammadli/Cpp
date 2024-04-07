#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ function to calculate the total and average of four numbers. Divide the total by 4 to find the average.
*/

int total(int x, int y, int z, int j)
{
    return x + y + z + j;
}

float average(float x, float y, float z, float j)
{
    float ave = (x + y + z + j) / 4;
    return ave;
}
int main()
{
    int a, b;
    cin >> a >> b;

    int c, d;
    cin >> c >> d;

    cout << "The total of four numbers is : " << total(a, b, c, d) << endl;
    cout << "The average of four numbers is : " << average(a, b, c, d) << endl;
    return 0;
}
