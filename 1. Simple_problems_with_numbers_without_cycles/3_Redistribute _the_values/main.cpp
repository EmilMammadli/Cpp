
#include <iostream>

using namespace std;

/*
    Redistribute the values of variables X and Y so that X has the greater of these values, and Y has the lesser.
*/


int main() {
    int x;
    int y;

    cin >> x >> y;
    
    if(x > y){
        cout << x << " " << y;
    }else if(x < y){
        cout << y << " " << x;
    }else{
        cout << x << " " << y;
    }  
    return 0;
}
