#include<iostream>
 using namespace std;
  
  int getlength(char arr[]){
     int length = 0;
     while(arr[length] != '\0'){
        length++;
     }  
     return length;
  }

  bool Palindrome(char arr[], int n){
       int len = getlength(arr);
       int i = 0;
       int j = len-1;

       while(i<=j){
         if(arr[i] == arr[j]){
            i++;
            j--;
         }
         else{
            return false;
            }
       }
       return true; 
  }
  
  
  int main(){
 
    char arr[100];
    cin>>arr;

    cout<<"IS PALINDROME OR NOT : "<<Palindrome(arr, 100);
    
    return 0;
  }