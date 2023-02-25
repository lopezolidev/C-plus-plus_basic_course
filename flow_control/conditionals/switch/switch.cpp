#include <iostream>

using namespace std;

int main(){
    int IMC;

    cout << "Please insert your IMC: " << endl;
    cin >> IMC;

    switch( IMC ){
        case 17:
            cout << "Your IMC is below average";
            break;
        case 20:
            cout << "Yout IMC is close to average";
            break;
        case 24:
            cout << "Yout IMC is average";
            break;
        case 28:
            cout << "Yout IMC is larger than average";
            break;
        case 32:
            cout << "Yout IMC is too far from average";
            break;
        default:
            cout << "Your IMC is out of limits";
    }
    //basic structure of switch. Comparing a value to different cases. Only works with char, int or enum types

    return 0;
}

