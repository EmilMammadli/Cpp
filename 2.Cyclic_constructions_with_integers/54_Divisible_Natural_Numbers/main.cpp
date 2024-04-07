#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N (N < 1000), find all natural numbers not exceeding N that are divisible by each of their digits.
*/

int main()
{

    int N;
    cin >> N;

    int i = 1;
    int temp; // temp = i
    int digit;
    bool flag;

    for (i = 1; i < N; i++)
    {
        temp = i;
        flag = true;
        while (temp > 0)
        {
            digit = temp % 10;
            if (digit == 0)
            {
                flag = false;
                break;
            }
            else
            {
                if (i % digit != 0)
                {
                    flag = false;
                    break;
                }
            }
            temp /= 10;
        }
        if (flag == true)
        {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
