#include<iostream>
#include<limits.h>
#include<vector>
 using namespace std;

  int Maximum(vector<vector<int>> arr ){
       int Maximum = INT_MIN;
        int rowsize = arr.size();
         int colsize = arr[0].size();
          for(int i=0; i<rowsize; i++){
            for(int j=0; j<colsize; j++){
                Maximum = max(arr[i][j], Maximum);
            }
         }
         return Maximum;
  } 

  int main(){

    vector<vector<int>>arr(3,vector<int>(3,0));
    int rowsize = arr.size();
    int colsize = arr[0].size();

    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
           cout<<"Enter the value for ("<< i <<","<< j <<")"<<" ";
           cin>>arr[i][j];
        }
    }

    cout<<"PRINTED ARRAY "<<endl;
    for(int i=0; i<rowsize; i++){
       for(int j=0; j<colsize; j++){
       cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }

    int ans = Maximum(arr);
    cout<<"Maxiimum Number is : "<<ans;

    return 0;
  }