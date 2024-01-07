#include <iostream>
using namespace std;

int toSeconds(int days) {
    return(days*24*60*60);
}

double toSeconds(double days) {
    return(days*24*60*60);
}

int main() {
    int days;
    cin >> days;

    int seconds = toSeconds(days);
    cout << seconds;

    double days2;
    cin >> days2;

    double seconds2 = toSeconds(days2);
    cout << seconds2;
}
