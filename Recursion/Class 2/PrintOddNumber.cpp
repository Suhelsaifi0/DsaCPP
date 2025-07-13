#include<iostream>
 using namespace std;
  
  void oddNumber(int arr[], int size, int index){

    // Base Case
    if(index == size){
        return;
   }

   // Recursive Call
   // 1 Case Mein Solve Karunga
   if((arr[index])%2==1){
    cout<<arr[index]<<" ";
   }
   // Baki Recursion Sambal le Ga
   oddNumber(arr, size, index+1);
}  
  
  int main(){

  int arr[] = {10,11,12,13,14,15};
  int size = 6;
  int index = 0;

  oddNumber(arr, size, index);

   return 0;
  }