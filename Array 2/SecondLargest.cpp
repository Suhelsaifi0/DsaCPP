#include<iostream>
#include<limits.h>
 using namespace std;

  int SecondLargest(int arr[], int n){
     int largest = arr[0];
     int slargest = -1;
      for(int i=0; i<n; i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
      }
      return slargest;
  }

//   int SecondSmallest(int arr[] , int n){
//      int smallest = arr[0];
//      int ssmallest = INT_MAX;
//        for(int i=0; i<n; i++){
//         if(arr[i]<smallest){

//         }
//        } 
//   }

  int main(){

   int n;
   cout<<"ENTER ARRAY INDEX HERE : "<<endl;
   cin>>n;

   int *arr = new int[n];
   cout<<"ENTER NUMBER HERE : "<<endl;
   for(int i=0; i<n; i++){
     int data;
     cin>>data;
     arr[i] = data;
   }


   cout<<"SECOND LARGEST NUMBER : "<<SecondLargest(arr, n);

    return 0;
  }