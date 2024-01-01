#include <iostream>
using namespace std;

int toSeconds(int days) {
    return(days*24*60*60);
}

int main() {
    int days;
    cin >> days;

    int seconds = toSeconds(days);
    cout << seconds;
}
