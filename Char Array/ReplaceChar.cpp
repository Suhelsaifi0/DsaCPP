#include<iostream>
using namespace std;
 
 void ReplaceChar(char originalChar, char NewChar, char arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i] == originalChar){
            arr[i] = NewChar;
        }
    }     
 }
 
 int main(){

   char arr[100];

   cin>>arr;
   ReplaceChar('@', ' ' ,arr, 100);
   cout<<arr;

    return 0;
 }