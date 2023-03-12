#include <iostream>

using namespace std;

/*
    functions let us use pieces of code in a modular fashion. We can reuse that code multiple times
*/

int multiply(int v1, int v2 = 5){
    //the '=' means a default value. If we don't send any value, it will take that value in the operations we wish to do

    return v1 * v2;
    //we're returning the operation between these two values
}

int main() {
    int a, b;
    //these are values to be operated

    cout << "Please, insert two values to be multiplied: " << endl;
    cin >> a;
    cin >> b; 

    cout << multiply(a, b);
    //we're calling this function in the output of main

    return 0;
}