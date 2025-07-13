#include<iostream>
using namespace std;
 
 void Pair1(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i]<<", "<<arr[j]<<endl;
        }
    }
 }

 void Pair2(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<arr[i]<<", "<<arr[j]<<endl;
        }
    }
 }

 void Pair3(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=n; j++){
            cout<<arr[i]<<", "<<arr[j]<<endl;
        }
    }
 }

 void Pair4(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=n; j--){
            cout<<arr[i]<<", "<<arr[j]<<endl;
        }
    }
 }

 void Pair5(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>n; j++){
            cout<<arr[i]<<", "<<arr[j]<<endl;
        }
    }
 }

 void Pair6(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            cout<<arr[i]<<", "<<arr[j]<<endl;
        }
    }
 }


 int main(){

   int arr[] = {10, 20, 30 , 40};
   int size = 4;

   //Pair1(arr, size);
   //Pair2(arr, size);
   //Pair3(arr, size);
   //Pair4(arr, size);
   //Pair5(arr, size);
   Pair6(arr, size);


    return 0;
 }