#include<iostream>
using namespace std;

   void convertOneandZero(int arr[], int n){
        
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                arr[i] = 1;
            }
            else if(arr[i] == 1){
                arr[i] = 0;
            }
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

    convertOneandZero(arr, n);

    cout<<"CONVERT ONE AND ZERO : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}