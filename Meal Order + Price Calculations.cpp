//This program will take in food and drink orders, as well as calculate and output the sum of the order.
//Date: 24 December 2023

#include <iostream>
using namespace std;

int main() {
    //List food options
    cout << "1: Salad" << endl;
    cout << "2: Steak" << endl;
    cout << "3: Orange Chicken" << endl;
    cout << "4: Shrimp Alfredo" << endl;
    cout << "5: Three-bean Chili" << endl;
    //Food choice. 5 options
    int food;
    cout << "Choose your food: ";
    cin >> food;
    switch(food) {
        case 1:
            cout << "Food choice: Salad - $14.59" << endl;
            break;
        case 2:
            cout << "Food choice: Steak - $32.59" << endl;
            break;
        case 3:
            cout << "Food choice: Orange Chicken - $18.99" << endl;
            break;
        case 4:
            cout << "Food choice: Shrimp Alfredo - $30.49" << endl;
            break;
        case 5:
            cout << "Food choice: Three-bean Chili - $14.59" << endl;
            break;
    }
    
    //Space (break) between food and drink selection
    cout << " " << endl;
    
    //List drink options
    cout << "1: Water" << endl;
    cout << "2: Tea" << endl;
    cout << "3: Lemonade" << endl;
    cout << "4: Coca-Cola" << endl;
    
    //Drink choice. 4 options
    int drink;
    cout << "Choose your drink: ";
    cin >> drink;
    switch(drink) {
        case 1:
            cout << "Drink choice: Water - $0.00" << endl;
            break;
        case 2:
            cout << "Drink choice: Tea - $3.99" << endl;
            break;
        case 3:
            cout << "Drink choice: Lemonade - $3.99" << endl;
            break;
        case 4:
            cout << "Drink choice: Coca-Cola - $3.99" << endl;
            break;
    }

    //Space (break) between meal selection and item-cost review
    cout << " " << endl;
    
    const int maxSize = 5;
    double values[maxSize];

    int numValues;

    // Prompt the user to enter the number of values
    cout << "Enter the number items ordered: ";
    cin >> numValues;

    // Validate the input to ensure it's within the array size limit
    if (numValues <= 0 || numValues > maxSize) {
        cout << "Invalid input. Please enter a positive number up to " << maxSize << "." << endl;
        return 1;  // Exit the program with an error code
    }

    // Input values from the user and save them in the array
    cout << "Enter " << "the price for each item:" << endl;
    for (int i = 0; i < numValues; ++i) {
        cout << "Item " << i + 1 << ": ";
        cin >> values[i];
    }

    //Space (break) between item-cost review and total cost output
    cout << " " << endl;

    // Add the values given by the user and display the total cost
    double total = 0;
    for(double i:values) {
        total += i;
    }
    cout << "Total Cost: $" << total;
}
