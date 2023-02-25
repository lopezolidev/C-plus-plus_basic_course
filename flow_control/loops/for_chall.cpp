#include <iostream>

using namespace std;

int main() {

    //create a loop to output only even numbers from a list

    int numbersList[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //list from where we'll extract the numbers

    int limit = sizeof(numbersList) / sizeof(numbersList[0]);
    //obtaining the number of elements in the list

    for(int i = 0; i < limit; i++){
        if(numbersList[i] % 2 == 0){
            cout << numbersList[i] << endl;
        }
        //only will print the numbers that are even in the list
    }


        /*output:  
            2
            4
            6
            8
            10
        */ 
    return 0;
}