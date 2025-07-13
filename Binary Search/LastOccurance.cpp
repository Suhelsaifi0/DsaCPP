#include<iostream> 
 using namespace std;

  void LastOccurance(int arr[], int n , int target, int &ansindex){
      int s = 0;
      int e = n-1;
      int mid = s + (e-s)/2;

      while(s<=e){
        if(target == arr[mid]){
            ansindex = mid;
            s = mid+1;
        }
        if(target > arr[mid]){
            s = mid+1;
        }
        if(target < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
      }   
  }

  int main(){

    int arr[] = {10,20,20,20,20,20,20,20,20,20,30};
    int n = 11;
    int target = 20;

    int ansindex = -1;

    LastOccurance(arr, n , target, ansindex);
    cout<<"Last Occurance index : "<<ansindex<<endl;

    return 0;
  }