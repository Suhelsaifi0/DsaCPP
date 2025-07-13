#include <iostream>
using namespace std;

 void ReverseArr1(int arr[], int n){
      int start = 0;
      int end = n-1;

      for(int i=0; i<n; i++){
          while(start<end){
             swap(arr[start], arr[end]);
             start++;
             end--;
          }
      }
 
      cout<<"REVERSE 1st ARRAY : " <<endl;
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
 }

 void ReverseArr2(int arr[], int n){
      int start = 0;
      int end = n-1;

      for(int i=0; i<n; i++){
          while(start<end){
             swap(arr[start], arr[end]);
             start++;
             end--;
          }
      }
 
      cout<<"REVERSE 2ND ARRAY : " <<endl;
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
      }
 }

int main(){

    int arr1[5] = {1,2,3,4,5};
    int arr2[4] = {10,20,30,40};

    ReverseArr1(arr1, 5);
    ReverseArr2(arr2, 4);


    return 0;
}