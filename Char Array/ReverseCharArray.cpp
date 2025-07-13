#include<iostream>
using namespace std;

int getlength(char arr[]) {
    int length = 0;
    while (arr[length] != '\0') {
        length++;
    }
    return length;
}

void ReverseCharArray(char arr[], int n) {
    int length = getlength(arr);      
    int start = 0;
    int end = length - 1;

    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;         
    }     
}

int main() {
    char arr[100];
    cout << "ENTER ANY LETTER HERE :" << endl;
    cin >> arr;

    ReverseCharArray(arr, 100);
    cout << arr;
 
    return 0;
}
