#include <iostream>

using namespace std;

/*
    You are given a three-digit number. Your task is to write a program that prints the number with spaces between the digits.
*/

int main(){
    int number; // 3 digit number
    int a;
    int b;
    int c;

    cin >> number;

    a = number % 10;
    b = (number / 10) % 10;
    c = number / 100;

    cout << c << " " << b << " " << a << endl;  

    return 0;
}