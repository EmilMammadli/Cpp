
#include <iostream>

/*
    You are given two integers, a and b. Your task is to write a program that swaps the values of a and b.

    Implement a code that takes two integers a and b as input and swaps their values.
*/

using namespace std;
int main() {
    int a = 5;
    int b = 8;
    int c = b;

    b = a;

    cin >> c >> b;
    cout << b << " " << c;
    return 0;
}