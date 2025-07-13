#include<iostream>
 using namespace std;

   void ExtremePrint(int arr[], int n){
      
      int i = 0;
      int j = n-1;

      while(i<j){
        cout<<arr[i]<<" ";
        i++;
        cout<<arr[j]<<" ";
        j--;
      }
   }

  int main(){

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    ExtremePrint(arr, size);
          

    return 0;
  }