#include<iostream>
#include<limits.h>
 using namespace std;

 void MinimunArray(int arr[], int size, int index, int &mini){
      
      // Base Case
      if(index == size){
        return ;
      }
      //Recurive Call
      //1case mera
      mini = min(arr[index], mini);
      //Baki Rucurion ka 
      MinimunArray(arr, size, index+1, mini); 

  }
 

  int main(){

    int arr[] = {20,30,40,60,10,50};
    int size = 6;
    int index = 0;

    int mini = INT_MAX;

    MinimunArray(arr, size, index, mini);
    cout<<"MAXIMUM ARRAY -> " <<mini;

    return 0;
  }