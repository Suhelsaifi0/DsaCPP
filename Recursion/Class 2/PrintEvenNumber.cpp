#include<iostream>
 using namespace std;
  
  void EvenNumber(int arr[], int size, int index){

    // Base Case
    if(index == size){
        return;
   }

   // Recursive Call
   // 1 Case Mein Solve Karunga
   if((arr[index])%2==0){
    cout<<arr[index]<<" ";
   }
   // Baki Recursion Sambal le Ga
   EvenNumber(arr, size, index+1);
}  
  
  int main(){

  int arr[] = {10,11,12,13,14,15};
  int size = 6;
  int index = 0;

  EvenNumber(arr, size, index);

   return 0;
  }