#include<iostream>
using namespace std;

 bool FindTarget(int arr[], int size, int target){
      for(int i=0; i<5; i++){
         cout<<arr[i]<<" ";
        
        if(arr[i]==target){
         return true;
        }
      }return false;
 }

 int main(){

    int arr[100];
    int size;
    cout<<"Enter Size Of Array Here : "<<endl;
    cin>>size;

    cout<<"Enter the Input value For Index : "<<endl;
    for(int i=0; i<size; i++){
      cin>>arr[i];
    }

    int target;
    cout<<"Enter Target : "<<endl;
    cin>>target;

    bool ans = FindTarget(arr, size , target);
    cout<<"Ans : "<<ans;

    return 0;
 }