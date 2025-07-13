#include<iostream>
 using namespace std;

  int getLength(char arr[], int size){
     int count = 0;
     int index = 0;

     while(arr[index] != '\0'){
        index++;
        count++;
     }
     return count;
  }

  int main(){
     
     char arr[100];
   //   cin>>arr;
   cin.getline(arr, 100);
   cout<<getLength(arr, 100)<<endl;

     return 0;
  }