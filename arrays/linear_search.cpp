#include <iostream>
using namespace std;

/*
    Topic: Linear Search

    Linear Search is a simple searching technique.
    In this method, we check each element of the array one by one
    until the target element is found.

    If the element is found, its index is returned.
    If the element is not found, the function returns -1.

    Time Complexity:
    Best Case  -> O(1)
    Worst Case -> O(n)
*/

// Function to perform Linear Search
int linearSearch(int arr[], int sz, int target) {

    // Traverse the array
    for(int i = 0; i < sz; i++) {

        // Check if current element matches target
        if(arr[i] == target) {
            return i; // Return index if found
        }
    }

    // Return -1 if target is not present
    return -1;
}

int main() {

    // Array declaration
    int arr[] = {1, 23, 16, 45, 74, 88, 9, 4};

    // Size of array
    int sz = 8;

    // Element to search
    int target = 45;

    // Calling linear search function
    int result = linearSearch(arr, sz, target);

    // Printing result
    cout << "Target found at index: " << result << endl;

    return 0;
}