#include<iostream>
#include<limits.h>
using namespace std;

  int LargestArray(int arr[], int n){
      int MaxAns = INT_MIN;
      for(int i=0; i<n; i++){
        if(arr[i]>MaxAns){
         MaxAns = max(arr[i], MaxAns);
        }
      }
      return MaxAns;
  }

   int SmallestArray(int arr[], int n){
      int MinAns = INT_MAX;
      for(int i=0; i<n; i++){
        if(arr[i]<MinAns){
         MinAns = min(arr[i], MinAns);
        }
      }
      return MinAns;
  }


 int main(){

   int n;
   cout<<"ENTER ARRAY SIZE HERE : "<<endl;
   cin>>n;

   int *arr = new int[n];
   cout<<"TYPE NUMBER : "<<endl;
   for(int i=0; i<n; i++){
      int data;
      cin>>data;
      arr[i] = data;
   }

   cout<<"MAXIMUN ARRAY : "<<LargestArray(arr, n)<<endl;
   cout<<"SMALLEST ARRAY : "<<SmallestArray(arr, n)<<endl;

    return 0;
 }