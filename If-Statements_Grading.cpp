#include <iostream>
using namespace std;

int main() {
  int points;
  cin >> points;
  if(points >= 70) {
    cout << "Pass";
  }
  if(points <= 69.9) {
    cout << "Fail";
  }
}
