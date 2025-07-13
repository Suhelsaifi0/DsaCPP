#include<iostream>
 using namespace std;

  int BinarySearch(int arr[], int size, int s, int e, int target){
    
      // Base Case
      if(s > e){
        return -1;
      }

    // Recursive Call
    int mid = (s+e)/2;
    //Mera Case Hai ye
    if(arr[mid] == target){
        return mid;
    }

    //Recursion Sambal le ga
    if(target > arr[mid]){
       return BinarySearch(arr, size, mid+1, e, target);
    }
    
    else{
       return BinarySearch(arr, size, mid-1, s,  target);
    }
  }


  int main(){

   int arr[] = {10,20,30,40,50,60};
   int size = 6;
   int target = 60;

   int s = 0;
   int e = size - 1;

   int ans = BinarySearch(arr, size, s, e, target);
   cout<<"ANSWER : "<<ans;

    return 0;
  }