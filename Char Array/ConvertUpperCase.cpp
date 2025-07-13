#include <iostream>
using namespace std;

int getlength(char arr[]) {
    int length = 0;
    while (arr[length] != '\0') {
        length++;
    }
    return length;
}

void ConvertUpperCase(char arr[], int n) {
    int len = getlength(arr);

    for (int i = 0; i < len; i++) {
        char ch = arr[i];
        if (ch >= 'a' && ch <= 'z') {  
            ch = ch - 'a' + 'A';       // Convert to uppercase
        }
        arr[i] = ch;
    }
}

int main() {
    char arr[100];
    cin >> arr;

    ConvertUpperCase(arr, 100);

    cout << arr << endl;

    return 0;
}
