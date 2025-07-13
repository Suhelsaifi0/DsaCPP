#include<iostream>
using namespace std;

   void sortOneandZeroandTwo(int arr[], int n){
        
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        else if (arr[i] == 1){
            oneCount++;
        }
        else if(arr[i] == 2){
            twoCount++;
        }
    }
    
    // Insertion
    int i=0;
    for(; i<zeroCount; i++){
        arr[i] = 0;
    }

    for(; i<zeroCount + oneCount ; i++){
        arr[i] = 1;
    }

    for(; i<n; i++){
        arr[i] = 2;
    }

}

   int main(){

    int n;
    cout<<"ENTER NUMBER : ";
    cin>>n;

    int arr[n];
    cout<<"ENTER ARRAY : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sortOneandZeroandTwo(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}