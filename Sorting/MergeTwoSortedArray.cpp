#include<iostream>
#include<vector>
 using namespace std;
 
 void mergeTwoSortedArray(int arr[], int sizearr, int brr[], int sizebrr, vector<int> &ans){
      
      int i = 0;
      int j = 0;

      while(i < sizearr && j < sizebrr){
             // Campare of two sorted Array And Push it into Ans Array        
             if(arr[i] < brr[j]){
             ans.push_back(arr[i]);
             i++;
            }
            else{
                ans.push_back(brr[j]);
                j++;
          }
      }

    // 1 case Jab hamare Arr me Kuch Element Bacche
    while(i < sizearr){
        ans.push_back(arr[i]);
        i++;     
    }
   // 2 case Jab hamare brr me Kuch Element Bacche    
    while(j < sizebrr){
      ans.push_back(brr[j]);
        j++;     
    }
}
 
  int main(){

   int arr[] = {10, 20, 30, 40 , 50};
   int sizearr = 5; 

   int brr[] = {60, 70, 80, 90};
   int sizebrr = 4;

   vector<int> ans;
   mergeTwoSortedArray(arr, sizearr, brr, sizebrr, ans);

   //Printing
   for(int num : ans){
        cout<<num<<" ";
   }

    return 0;
  }