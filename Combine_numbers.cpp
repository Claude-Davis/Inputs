#include <iostream>
using namespace std;

int main() {
  //Declare 5 integer type variables
  int a, b, c, d, e;

  //Request user input for each variable
  cout << "Input a, b, c, d, and e: " << endl;
  cin >> a >> b >> c >> d >> e;

  //Line break between the inputs and the rest of the code.
  cout << " " << endl;

  //Use the inputs to calculate and output a series of equations
  cout << a << "/" << e << "=" << a/e << endl;    //Divide a by e
  cout << d << "-" << b << "=" << d - b << endl;  //Subtract b from d
  cout << c << a << endl;                         //Combine c and a for a new number
  cout << e << "+" << d << "=" << e + d << endl;  //Add e and d
  cout << b << "*" << c << "=" << b * c;          //Multiply b and c
}
