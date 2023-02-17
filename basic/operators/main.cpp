#include <iostream>
#include <math.h>

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
    cout << " elements" << endl;
    //this is a way to know how long is our list

    char letters_list[] = {'a', 'x', 'z'};
    cout << "letter " << letters_list[1] << " : " << letters_list[1] << endl;
    //array of letters

    int sum = 2 + 4;
    cout << "int sum result: " << sum << endl;
    // int sum result: 6


    float fsum = 2.0 + 4.10;
    cout << "float sum result: " << fsum << endl;
    //float sum
    //  float sum result: 6.1

    float subs = 6.97 - 3.23;
    cout << "float substraction result: " << subs << endl;
    //float substraction
    //  float substraction result: 3.74

    float div = 5.45 / 3.21;
    cout << "float division result: " << div << endl; 
    //float division operation
    //  float division result: 1.69782

    int mod = 1234 % 10;
    cout << "int module: " << mod << endl;
    //  int module: 4

    int modrepbase = 1234;
    modrepbase %= 10;
    cout << "your module repeated result is: " << modrepbase << endl;
    //  your module repeated result is: 4

    int divrepeatedbase = 4321;
    divrepeatedbase /= 10;
    cout << "your division repeated result is: " << divrepeatedbase << endl;
    // your division repeated result is: 432

    //we get the same result in these last operations using the same "=" sign just as the other operations, the difference is related on how we can use this form instead of the other when coming down to loops and repeated operations


    return 0;
}