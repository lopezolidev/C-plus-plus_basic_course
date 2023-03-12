#include <iostream>

using namespace std;

int main(){
    /*
    while loop let us repeat a certain activity for an undefined period of time, always checking the condition regarding the activity inside the loop, everytime it repeats
    */

   while (true) {
    //this loop will always execute this instructions inside, the condition is true
    char res;
    cout << "Do you wish to continue?\n";
    cin >> res;
    //initializing a variable and inserting it
    if (res == 'y'){
        //checking the condition to execute the output and stop the cycle
        cout << "thanks for your response...";
        break;
        //reserved word to stop the loop
    }
   }

   return 0;
}