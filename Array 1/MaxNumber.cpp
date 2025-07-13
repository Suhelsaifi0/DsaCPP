#include<iostream>
#include<limits.h>
 using namespace std;

  int findMax(int arr[], int size) {
    int maxAns = INT_MIN;
    for(int i=0; i<size; i++) {
        maxAns = max(maxAns, arr[i]);
    }
    return maxAns;
}

  int main(){

    int arr[100];
    int size;
    cout<<"Enter Array Index Size : "<<endl;
    cin>>size;

    for(int i=0; i<size; i++){
        cout<<"Enter Array Number Here : "<<i<<endl;
        cin>>arr[i];
    }
    cout << "max number is: " << findMax(arr,size) << endl;

    return 0;
  }