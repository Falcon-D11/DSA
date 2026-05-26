#include <iostream>

using namespace std;

// Arrays are passed by reference in C++
// So changes made inside the function
// also change the original array

void changeArr(int arr[], int size) {

    for(int i = 0; i < size; i++) {

        // Doubling each element of the array
        arr[i] = 2 * arr[i];
    }
}

int main() {

    int arr[] = {1, 2, 3, 4};

    // Function call
    changeArr(arr, 4);

    // Printing updated array
    for(int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}