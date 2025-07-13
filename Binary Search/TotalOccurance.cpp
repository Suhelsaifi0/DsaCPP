#include<iostream>
#include<vector> 
using namespace std;

 int FirstOccurance(vector<int>& arr, int target){
    int  s = 0;
    int e = arr.size();
    int mid = s + (e-s)/2;
    int ansindex = -1;

    while(s<=e){
      if(target == arr[mid]){
        ansindex = mid;
        e = mid - 1; 
      }
      if(target>arr[mid]){
        s = mid + 1;
      }
      if(target<arr[mid]){
        e = mid - 1;
      }
      mid = s + (e-s)/2;
    }
   return ansindex;
 }

  int LastOccurance(vector<int>& arr, int target){
    int  s = 0;
    int e = arr.size();
    int mid = s + (e-s)/2;
    int ansindex = -1;

    while(s<=e){
      if(target == arr[mid]){
        ansindex = mid;
        s = mid + 1; 
      }
      if(target>arr[mid]){
        s = mid + 1;
      }
      if(target<arr[mid]){
        e = mid - 1;
      }
      mid = s + (e-s)/2;
    }
   return ansindex; 
  }

 int TotalOccurance(vector<int>& arr, int target){
     int First = FirstOccurance(arr, target);
      if(First == -1){
        return -1;
      }
     int Last = LastOccurance(  arr, target);
     return Last - First + 1;
 }

 int main(){

  vector<int> arr ={10, 20, 20, 20, 20, 20, 30, 40, 50};
  int target = 20;

  int count = TotalOccurance(arr, target);
  cout<<"TOTAL OCCURANCE OF NUMBER IS : "<<count<<endl;
  return 0;
 }