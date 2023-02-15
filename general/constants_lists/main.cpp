#include <iostream>

using namespace std;

int main() {
    int age = 0;
    age = 39;
    //this is how we declare and reassign variables

    const char letter = 'A';
    //declaring and assigning constants

    int ages_list[] = { 23, 61, 17 };
    //declaring a variable list

    cout << age << endl;
    cout << letter << endl;
    cout << ages_list[1];
    //endl makes us a line jump


    return 0;
}