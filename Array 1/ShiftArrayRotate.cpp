#include <iostream>
using namespace std;

void rotateArray(int arr[], int size, int shift) {
    // Step 1: Store N elements of array in a temp variable
    int finalShift = shift % size;

    if (finalShift == 0) {
        return;
    }

    int temp[10000]; // Temporary array
    int index = 0;
    
    // Store last 'finalShift' elements in temp array
    for (int i = size - finalShift; i < size; i++) {
        temp[index] = arr[i];
        index++;
    }

    // Step 2: Shift the remaining elements
    for (int i = size - 1; i >= 0; i--) {
        arr[i] = arr[i - finalShift];
    }

    // Step 3: Copy temp array back to the main array
    for (int i = 0; i < finalShift; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n;
    cout << "ENTER NUMBER OF ELEMENTS IN ARRAY: ";
    cin >> n;

    int arr[n];
    cout << "ENTER ARRAY ELEMENTS: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int shift;
    cout << "ENTER SHIFT VALUE: ";
    cin >> shift;

    rotateArray(arr, n, shift);

    cout << "AFTER ROTATION: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Fixed output formatting
    }
    cout << endl;

    return 0;
}
