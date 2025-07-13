#include<iostream>
using namespace std;

int removeDuplicate(int arr[], int n) {
    if (n == 0) return 0;  // Edge case: If array is empty

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;  // The length of the new array
}

int main() {
    int n;
    cout << "ENTER NUMBER OF ELEMENTS IN ARRAY: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!";
        return 1;
    }

    int arr[n];
    cout << "ENTER SORTED ARRAY: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newSize = removeDuplicate(arr, n);

    cout << "ARRAY AFTER REMOVING DUPLICATES: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
