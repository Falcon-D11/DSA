#include <iostream>
#include <climits>   // Required for INT16_MAX

using namespace std;

// Program to find the smallest element in an array

int main() {

    int nums[] = {1, 22, 42, 72, 66, 88, 90};

    // INT16_MAX stores a very large value initially
    // so that any number in the array becomes smaller than it
    int smallest = INT16_MAX;

    // Loop through all array elements
    for(int i = 0; i < 7; i++) {

        // If current element is smaller,
        // update the value of smallest
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
    }

    cout << "Smallest Element = " << smallest << endl;

    return 0;
}