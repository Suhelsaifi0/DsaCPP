#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0; // Change in This Line
    cout<<"Enter Number Here : "<<endl;
    cin >> n;

    int input[n];
    for(int i=0;i<n;i++){
        cin >> input[i]; // Change in This Line
    }
     for(int i=0; i<n; i++){
         sum = sum + input[i]; // Change in This Line
     }
    cout <<"Total Sum Of Number Are : "<< sum << " "<< endl;
    return 0;
}