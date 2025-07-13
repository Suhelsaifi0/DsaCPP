#include<iostream>
  using namespace std;

  int BinarySearch(int arr[], int n , int target){
     int s = 0;
     int e = n-1;
     int mid = s + (e-s)/2;
     
     while (s<=e)
     {
        if(target==arr[mid]){
            cout<<"INDEX IS : ";
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

    int n;
    cout<<"ENTER NUMBER OF ARRAY : ";
    cin>>n;

    int arr[n];
    cout<<"ENTER ARRAY : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // int arr[6] = {1, 2, 3, 4, 5, 6};
    // int size = 6;

    int target;
    cout<<"ENTER TARGET : ";
    cin>>target;
    //int target = 4;

    int ans = BinarySearch(arr , n , target);
    cout<<ans;
 
     return 0;
}