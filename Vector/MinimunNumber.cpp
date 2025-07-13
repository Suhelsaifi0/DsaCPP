#include<iostream>
#include<limits.h>
#include<vector>
 using namespace std;

  int Minimum(vector<vector<int>> arr ){
       int Minimum = INT_MAX;
        int rowsize = arr.size();
         int colsize = arr[0].size();
          for(int i=0; i<rowsize; i++){
            for(int j=0; j<colsize; j++){
                Minimum = min(arr[i][j], Minimum);
            }
         }
         return Minimum;
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

    int ans = Minimum(arr);
    cout<<"Minimum Number is : "<<ans;

    return 0;
  }