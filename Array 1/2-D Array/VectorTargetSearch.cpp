#include<iostream>
#include<vector>
 using namespace std;

  bool Target(vector<vector<int>> arr, int target){
         int RowSize = arr.size();
         int ColSize = arr[0].size();
           for(int i=0; i<RowSize; i++){
            for(int j=0; j<ColSize; j++){
                if(arr[i][j] == target)
                return true;
            }
        }
        return false;   
      }

  int main(){

   vector<vector<int>>arr(3,vector<int>(3,0));
   int RowSize = arr.size();
   int ColSize = arr[0].size();

    for(int i=0; i<RowSize; i++){
        for(int j=0; j<ColSize; j++){
            cin>>arr[i][j];
        }
    }

    int target;
    cout<<"Enter Target : "<<endl;
    cin>>target;

    bool ans = Target(arr, target);
     if(ans == true){
        cout<<"Target Found"<<endl;
     }
     else{
        cout<<"Target Not Found"<<endl;
     }
    return 0;
 }