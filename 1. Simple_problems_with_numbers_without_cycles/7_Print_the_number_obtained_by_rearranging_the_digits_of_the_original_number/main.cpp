#include <cmath>
#include <iostream>

using namespace std;

/*
    A two-digit integer is given. Print the number obtained by rearranging the digits of the original number.
*/

int main() {
    int number;

    cin >> number;


    if ((number % 10 == 0) && (number > 10 || number <= 99))
    {
        cout << number / 10 << endl;
    }else if (number > 10 && number <= 99)
    {
        cout << (number % 10) << (number / 10) << endl;
    }  
    return 0;
}