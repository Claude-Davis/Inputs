#include <iostream>
using namespace std;

int main() {
    int n;
  
    //Input size of the array
    cout << "Enter size of the array:" << endl;
    cin >> n;
    
    //Dynamically allocate memory for the array
    int *nums = new int[n];

    //Input array elements
    cout << "Enter array elements:" << endl;
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    //Calculate the maximum value in the array
    int max = nums[0];
    for(int i=0; i<n; i++) {
        if(nums[i]>max)
            max = nums[i];
    }
    cout << "Maximum Value of the Array: " << max;
}
