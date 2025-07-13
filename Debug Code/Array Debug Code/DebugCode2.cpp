#include<iostream>
#include<limits.h>
using namespace std;

bool linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}

int main(){
    
    int arr[100];
    int size;
    cout<<"Enter total index : "<<endl;
    cin>>size;

   for(int i=0; i<size; i++){
    cout<<"Enter Number Of Array :"<<endl;
    cin>>arr[i];
   }

   int val;
   cout<<"Enter Target : "<<endl; 
   cin>>val;

   bool ans = linearSearch(arr, size, val);
   cout<<ans;

    return 0;
}