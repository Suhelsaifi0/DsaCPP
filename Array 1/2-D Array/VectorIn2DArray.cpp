#include<iostream>
#include<vector>
 using namespace std;
  int main(){

   vector<vector<int>>arr(5,vector<int>(5,1));
    int RowSize = arr.size();
    int ColSize = arr[0].size();

     for(int i=0; i<RowSize; i++){
        for(int j=0; j<ColSize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

     return 0;
  }