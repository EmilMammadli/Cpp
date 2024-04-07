#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a string containing words separated by spaces, write a C++ program to capitalize the first letter of each word while converting the rest of each word to lowercase. Words are separated by a single space.
*/


int main() {
    string text;
    getline(cin, text);

    text[0] = toupper(text[0]);
    
    cout << text[0];

    for(size_t i = 1; i <= text.length() - 1; i++){
        if(isupper(text[i])){
            text[i] = tolower(text[i]);
        }
        if(isblank(text[i - 1])){
            text[i] = toupper(text[i]);
        }
        if(!isalnum(text[i - 1])){
            text[i] = toupper(text[i]);
        }

        cout << text[i];
    }

    cout << endl;
    return 0;
}
