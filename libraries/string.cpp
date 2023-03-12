#include <iostream>
#include <string> //this libary will let use character strings instead of arrays of characters

using namespace std;

int main(){
    char text[] = {'H', 'e', 'l', 'l', 'o'};
    //an array of characters to display a text → without string library

    cout << "array of characters: "<< text << endl;

    string new_text = "Hello World!";
    //displaying a string properly using the reserved word "string" for string variables

    cout << "string: "<< new_text << endl;

    string number = "10";
    cout << "string: " << number << endl;
    // cout << "operation with a string: " << number << " + " << 5 << " = " << number + 5 << endl; ← it won't compile because we cannot sum strings with integers

    cout << "string to integer: " << stoi(number) << endl;
    //stoi(string) → turns a string variable where it's a number into a number

    string floating_number = "47.38";
    cout << "string to float: " << stof(floating_number) << endl;
    //same as stoi but for floats

    cout << "operation with string to float: " << stof(floating_number) << " + " << 2.62 << " = " << stof(floating_number) + 2.62;
    //doing an operation to show how it works

    return 0;
}