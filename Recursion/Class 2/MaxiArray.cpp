#include<iostream>
#include<limits.h>
 using namespace std;

 void MaximumArray(int arr[], int size, int index, int &maxi){
      
      // Base Case
      if(index == size){
        return ;
      }
      //Recurive Call
      //1case mera
      maxi = max(arr[index], maxi);
      //Baki Rucurion ka 
      MaximumArray(arr, size, index+1, maxi); 

  }
 

  int main(){

    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int index = 0;

    int maxi = INT_MIN;

    MaximumArray(arr, size, index, maxi);
    cout<<"MAXIMUM ARRAY -> " <<maxi;

    return 0;
  }