#include<iostream>
using namespace std;

 void Function(int arr[], int n){
    for(int i=0; i<5; i++){
        cout<<"ENTER ARRAY : "<<endl;
        cin>>arr[i];
    }
    
    cout<<"PRINTED ARRAY :"<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
 } 

 int main(){

    int arr[5];
    int size = 5;

    Function(arr , size);

    return 0;
 }