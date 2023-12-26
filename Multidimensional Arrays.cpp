#include <iostream>
using namespace std;

int main() {
    int num[4][5] = {
        {3, 6, 9, 12, 15},
        {5, 10, 15, 20, 25},
        {7, 14, 21, 28, 35},
        {9, 18, 27, 36, 45}
    };
    
    int row;
    cin >> row;
    
    int column;
    cin >> column;
    
    cout << num[row][column];
}
