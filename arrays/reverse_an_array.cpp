#include <iostream>

using namespace std;

void rev(int arr[], int as){
    int start=0, end=as-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {

    int arr[] = {1, 2, 3, 4};
    int as=4;
    rev(arr ,as);

 for(int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}