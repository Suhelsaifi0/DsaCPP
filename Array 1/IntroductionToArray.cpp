#include<iostream>
using namespace std;
 int main(){

    //Indexing  
    //int arr[5] = {10, 20, 30, 40, 50};
    //cout<<arr[1]; 

    //Fill Array 
    // int brr[4];
    // fill(brr, brr+4, 100);
    // cout<<brr[0]<<" "<<brr[1]<<" "<<brr[2]<<" "<<brr[3]<<endl;

    // How To Take Input in Array
    
    int crr[5];
    /* cout<<"Enter Crr[0]"<<endl;
    cin>>crr[0];
     cout<<"Enter Crr[1]"<<endl;
    cin>>crr[1];
     cout<<"Enter Crr[2]"<<endl;
    cin>>crr[2];
     cout<<"Enter Crr[3]"<<endl;
    cin>>crr[3];
     cout<<"Enter Crr[4]"<<endl;
    cin>>crr[4];*/
    
    for( int index=0; index<5; index++){
      cout<<"Enter Array Value Here : "<<endl;
      cin>>crr[index];
    }

    //Print
    for(int index=0; index<5; index++){
      cout<<crr[index]<<" ";
    }


    return 0;
 }