#include <iostream>

using namespace std;

int main(){
    int age;

    cout << "Are you elegible to vote? Please insert your age: " << endl;
    cin >> age;

    if(!(age < 18 || age > 40)){
        cout << "you can vote!";
        //if "age" is not less than 18 or greater than 40, then the person can vote
    } else {
        cout << "sorry, you can't vote";
    }

    return 0;
}