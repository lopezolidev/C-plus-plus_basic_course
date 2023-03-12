#include <iostream>

using namespace std;

/*
    do...while is almost the same as while, but with the catch that the instructions will be executed at least once (the first time) before checking the while condition
*/

int main(){
    int x;
    x = -3;
    //initializing value of -3 for variable x

    do {
        cout << x++ << endl;
    } while(x <= 10);
    //the output of adding 1 to x will be shown at least once. Then the condition of the while will be checked everytime from that point on

    return 0;
}