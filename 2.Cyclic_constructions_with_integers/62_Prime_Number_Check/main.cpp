#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, determine if it is a prime number.
*/

int main()
{
    int N;
    cin >> N;

    int i;
    int count = 0;

    for (i = N; i > 0; i--)
    {
        if (N % i == 0)
        {
            count++;
        }
        if (count > 2)
        {
            break;
        }
    }

    if (count <= 2)
    {
        cout << "Yes" << endl;
    }
    else if (count > 2)
    {
        cout << "No" << endl;
    }
    return 0;
}
