#include <iostream>

using namespace std;

int main() {
    int age = 0;
    // <data-type> <variable-name> = <value> ;

    age = 34;
    //variables can be reassigned

    const char letter = 'b';
    // 'const' indicates it's a constant making it impossible to alter it in the future

    // letter = 'a'; ← this line throws an error

    int ages_list[] = {14, 83, 51};
    //declaring a list with <variable_name>[] = {...}

    ages_list[1] = 26;
    //also variables in lists can be reassigned

    cout << age << endl;
    //'endl' applies a line jump
    cout << letter << endl;

    cout << ages_list[1];
    //to access a variable element in a list we write the index in []
}
