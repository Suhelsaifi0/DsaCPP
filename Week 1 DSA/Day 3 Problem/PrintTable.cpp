#include <iostream>

using namespace std;

int main() {
    int number;
    
    cout << "ENTER TABLE NUMBER : ";
    cin >> number;
    
    cout << "MULTIPLICATION TABLE : " << number<< endl;
    
    for (int i = 1; i <= 10; ++i) {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }
    
    return 0;
}