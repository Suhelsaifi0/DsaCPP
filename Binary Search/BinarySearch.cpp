#include<iostream>
  using namespace std;

  int BinarySearch(int arr[], int n , int target){
     int s = 0;
     int e = n-1;
     int mid = s + (e-s)/2;
     
     while (s<=e)
     {
        if(target==arr[mid]){
            return mid;
        }

        if(target>arr[mid]){
           s = mid + 1;
        }

        if(target<arr[mid]){
            e = mid - 1;
        }
      mid = s + (e-s)/2;
     }
     return false;
  }

   int main(){

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int target = 7;

    int ans = BinarySearch(arr , 6 , target);
    cout<<ans;
 
     return 0;
   }