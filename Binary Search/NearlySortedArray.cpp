#include<iostream> 
using namespace std;

 int NearlySorted(int arr[], int size, int target){
     
     int s = 0;
     int e = size-1;
     int mid = s + (e-s)/2;

     while(s <= e){
         if(arr[mid] == target){
            return mid;         
        }
        else if(arr[mid-1] == target){
            return mid - 1;
        }
        else if(arr[mid+1] == target){
            return mid + 1;
        }
        else if(target > arr[mid]){
            e = mid - 2;
        }
        else{
            s = mid + 2;
        }
        mid = s + (e-s)/2;
     }
     return -1;
 }


 int main(){

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    int target = 30;

    int ans = NearlySorted(arr, size, target);
    cout<<"INDEX PRESENT :"<<ans;

     return 0;
 }