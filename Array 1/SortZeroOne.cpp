#include<iostream>
 using namespace std;

  void SortZeroOne(int arr[], int n){
      int ZeroCount = 0;
      int OneCount = 0;

     for(int i=0; i<n; i++){
        if(arr[i] == 0){
        ZeroCount++;
        } 
        if(arr[i] == 1){
            OneCount++;
        }  
     }

     // Insertion
    int i=0;
    for(; i<ZeroCount; i++){
        arr[i] = 0;
    }
        
        for(; i<n; i++){
            arr[i] = 1;
        }
   }

  int main(){


   int arr[] = {0,1,1,0,0,1,0};
   int size = 7;

   SortZeroOne(arr, size);
   //Print Array
   
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
  }