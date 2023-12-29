//Functions-Parameters_ChatBot.cpp

#include <iostream>
using namespace std;

void bot(int mode, string name) {
    switch(mode) {
        case 1:
            //Mode 1 will output a 'welcome' message.
            cout << "Welcome, " << name << "!";
            break;
        case 2:
            //Mode 2 will output a 'farewell' message.
            cout << "Goodbye, " << name << "!";
            break;
        default:
            //An attempt at any other message will trigger a "Try Again" response.
            cout << "Try Again";
    }
}

int main() {
    int mode;
    cin >> mode;  //Request input for which message to output.

    string name;
    cin >> name;  //Request input for what 'name' to display.

    bot(mode, name);
}
