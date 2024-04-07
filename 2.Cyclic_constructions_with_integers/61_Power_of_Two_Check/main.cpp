#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, determine if it is a power of 2.
*/

int main()
{
    int N;
    cin >> N;

    int i = 0;

    while (N >= 1 && N <= pow(10, 9))
    {
        if ((pow(2, i) == N) && (i <= N))
        {
            cout << "Yes" << endl;
            break;
        }
        else if ((pow(2, i) != N) && (i <= N))
        {
            i++;
        }
        else if (i > N)
        {
            cout << "No" << endl;
            break;
        }
    }
    return 0;
}
