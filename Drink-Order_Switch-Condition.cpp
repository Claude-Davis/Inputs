#include <iostream>
using namespace std;

int main() {
    int drink;
    cin >> drink;
    switch(drink) {
        case 1:
            cout << "Water" << endl;
            break;
        case 2:
            cout << "Tea" << endl;
            break;
        case 3:
            cout << "Coffee" << endl;
            break;
        default:
            cout << "Invalid Option";
    }
    
    int ice;
    cin >> ice;
    switch(ice) {
        case 1:
            cout << "With Ice" << endl;
            break;
        case 0:
            cout << "No Ice" << endl;
            break;
    }
        
    int size;
    cin >> size;
    switch(ice) {
        case 1:
            cout << "Small";
            break;
        case 2:
            cout << "Medium";
            break;
        case 3:
            cout << "Large";
            break;
    }
}
