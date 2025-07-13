#include<iostream>
 using namespace std;
  
  int SearchArray(int arr[], int size, int index, int target){

   //Base Case
   if(index == size){
    return false;
   }
   //Recursive Call
   if(arr[index] == target){
    return true;
   }

   int ans = SearchArray(arr, size, index+1, target);
   return ans;
   //Processing

  }
  
  int main(){
    
    int arr[] = {10,20,30, 40,50,60};
    int size = 6;
    int index = 0;
    int target = 60;

    cout<<SearchArray(arr, size, index, target);
    
     return 0;
  }