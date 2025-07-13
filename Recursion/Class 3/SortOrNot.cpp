#include<iostream>
 using namespace std;
  
  int SortedArray(int arr[], int size, int index){

    // base Case
      if(index == size-1){
         return true;
      }

    // Recursive Call

    bool currAns = false;
    bool reckaAns = false;
 
    // 1 case me solve karunga
    if(arr[index+1] > arr[index]){
        currAns = true;
     } 

    // Baki Recursion Sambal Lega
    
    reckaAns =  SortedArray(arr, size, index+1);
     if(currAns == true && reckaAns == true ){
        return true;
     }
     else{
        return false;
     }

  }
  
  int main(){

   int arr[] = {10, 15, 25, 35, 600, 95};
   int size = 6;
   int index = 0;

   int ans = SortedArray(arr, size, index);
   cout<<"SORT OR NOT : "<<ans;

    return 0;
  }