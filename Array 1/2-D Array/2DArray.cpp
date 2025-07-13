#include<iostream>
 using namespace std;
  int main(){

    // Creation Of 2-D Array
    //  int arr[3][3];

    // // Initialise

    int arr1[3][3] = {
                     {10,20,30},
                     {40,50,60},
                     {70,80,90} 
                     }; 
    
    // cout<<arr1[0][1];


    // // traverse the entire Array
    // int rowsize = 3;
    // int colsize = 3; 
    // for(int i=0; i<rowsize; i++){
    //     for(int j=0; j<colsize; j++){
    //         cout<<arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Taking Input In 2-D Array -> Row Wise
    
    int arr[3][2];
     for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
        cout<<"Enter the value for ("<< i <<","<< j <<")"<<" ";
            cin>>arr[i][j];
        }
     }
    cout<<"Print 2D Array"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }


    

    return 0;
  }