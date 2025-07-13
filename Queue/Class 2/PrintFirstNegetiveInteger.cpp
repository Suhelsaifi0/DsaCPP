#include<iostream>
#include<deque>
 using namespace std;
 
 void printFirstNegetive(int *arr , int n, int k){
   
   deque<int> dq;

   // Process First K Element -> First Window
   for(int index=0; index<k; index++){
      int element = arr[index];
      if(element < 0){
        dq.push_back(index);
      }
   }

   // Process Remaining Window -> Remove And Addition
   for(int index = k; index < n; index++){
      // Aage Bhadne Se Phele Puri Window KA Answer Nikal do
   if(dq.empty()){
    cout<<"0"<<endl;
   }

   else{
    cout<<arr[dq.front()]<<" ";
   }

      // Remove -> Jo bhi index out of Range ha usko Queue se Remove kare do
      if(index - dq.front() >= k ){
        dq.pop_front();
      }

      // Addition 
      if(arr[index] < 0){
        dq.push_back(index);
      }      
   }

    // Print Karado Last Window
   if(dq.empty()){
    cout<<"0"<<endl;
   }

   else{
    cout<<arr[dq.front()]<<" ";
   }

}
 
 
 int main(){ 

   int arr[] = {2,-5 ,4 ,-1 ,-2 ,0 ,5};
   int size = 7;
   int k = 3;

   printFirstNegetive(arr, size, k);

    return 0;
 }