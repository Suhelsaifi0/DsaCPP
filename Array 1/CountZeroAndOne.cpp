#include<iostream>
 using namespace std;

 void countZeroAndOne(int arr[], int n){
    int ZeroCount = 0;
    int oneCount = 0;
    
    // Traverse Array

    for(int i=0; i<n; i++){
        int currElement = arr[i];

        if(currElement == 0){
            ZeroCount++;
        }
        if(currElement == 1){
            oneCount++; 
        }
    }
    
    cout<<"Total Number Of Zero are : "<<ZeroCount<<endl;
    cout<<"Total Number Of One are : "<<oneCount<<endl;
 }

  int main(){

   int arr[100];
   int size;
   cout<<"Enter Total Index : "<<endl;
   cin>>size;

   for(int i=0; i<size; i++){
    cout<<"Enter Number Here :"<<endl;
    cin>>arr[i];
   }
 
   countZeroAndOne(arr, size);
 

    return 0;
  }