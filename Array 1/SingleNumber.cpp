#include<iostream> 
using namespace std;

  int FindUnique(int arr[], int n){

    int ans = 0;
    for(int i=0; i<n; i++){
         ans = ans ^ arr[i];
      }
      return ans;
   }


 int main(){

   int size;
   cout<<"Enter Size Of Index Here : "<<endl;
   cin>>size;
   
   int arr[size];
   cout<<"Enter Number : "<<endl;
   for(int i=0; i<size; i++){
       cin>>arr[i];
   }

   int ans = FindUnique(arr, size);
   cout<<"Unique Number is : "<<ans; 
    return 0; 
}