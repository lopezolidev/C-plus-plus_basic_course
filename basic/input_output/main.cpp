#include <iostream>
// this library is responsible for the input and output of data into the program (input output stream)

using namespace std;

int main() {

    string fname;
    //declaring a string variable for the first name of the user

    cout << "Please insert your first name: ";
    cin >> fname;
    //inserting in the program the first name of the user and then storing it in the fname variable
    // output: Please insert your first name: SJ

    string lname;

    cout << "Please insert your last name: ";
    cin >> lname;
    //doing the same with the last name of the user
    // output: Please insert your last name: LO

    cout << "your name is: " << fname << " " << lname << endl;
    // output: your name is: SJ LO


    return 0;
}