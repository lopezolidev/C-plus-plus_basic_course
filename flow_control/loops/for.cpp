#include <iostream>

using namespace std;

int main(){
    int limit = 10;
    
    for(int i = 0; i < limit; i++){
        cout << i << " " << endl;
    }
    //basic for... loop structure in c++

    int list[] = {300, 43, 99, 100000};
    int ceiling = sizeof(list) / sizeof(list[0]);
    //calculating the size of elements from the list

    for(int o = 0; o < ceiling; o++){
        if(list[o] > 300){
            cout << "This number is too large";
            break;
            //reserved word "break" to stop a loop
            // stopping it when the number surpasses certain limit
        }
        cout << list[o] << " ← previous" << endl;
        cout << 2 * list[o] << " ← doubled" << endl;
    }
    
    return 0;
}