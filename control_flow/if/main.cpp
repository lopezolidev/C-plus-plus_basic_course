#include <iostream>

using namespace std;

int main() {
    int x, y;
    //declaring two variables

    cout << "please insert first value: " << endl;
    cin >> x;
    //inserting first value in the program

    cout << "please insert second value: " << endl;
    cin >> y;

    if( x > y){
        cout << x << " is greater than " << y; 
        //using conditional structure, if the comparison results in true, then this line is executed
    } else {
        cout << y << " is greater than " << x;
        //if not this one
    }
    return 0;
}