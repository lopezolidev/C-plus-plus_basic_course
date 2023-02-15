#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 4;

    a += 1;
    //summing 1 to a to obtain a greater number using operator +=

    bool c = a < b;
    //we want to know what is the boolean value of "c"

    int ages_list[] = { 7, 18, 12, 61};

    //TO-DO:
    // arithmetic operators: + - * / %
    // comparision operators: == < > <= >= !=
    // logic operators: && || !
    // assigning: = += -= *= /= ++ --
    // others: sizeof << >>

    cout << a + b << endl;
    cout << c << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(ages_list) / sizeof(ages_list[0]);
    cout << " elements";
    //this is a way to know how long is our list
}