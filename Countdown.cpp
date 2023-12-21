#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
  //while loop
  while(number >= 0) {
    cout << number << endl;
    number--;
    }
}


#include <iostream>
using namespace std;

int main() {
  int number;
  cin >> number;
  //do-while loop
  do {
    cout << number << endl;
    number--;
  } while(number >= 0);
}
