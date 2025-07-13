#include<iostream>
#include<vector>
 using namespace std;
  
  int RowSum(vector<vector<int>> arr){
     int RowSize = arr.size();
     int ColSize = arr[0].size();   

     for(int i=0; i<RowSize; i++){
        int sum = 0;
         for(int j=0; j<ColSize; j++){
            sum = sum + arr[i][j];
         }
         return sum;
     } 
  }
  
    int ColSum(vector<vector<int>> arr){
     int RowSize = arr.size();
     int ColSize = arr[0].size();

     for(int j=0; j<RowSize; j++){
        int sum = 0;
         for(int i=0; i<ColSize; i++){
            sum = sum + arr[i][j];
         }
         return sum;
     } 
  }

  int DiagonalSum(vector<vector<int>> arr){
     int RowSize = arr.size();
     int ColSize = arr[0].size();

     int sum = 0;
     for(int i=0; i<RowSize; i++){
         for(int j=0; j<ColSize; j++){
             if(i==j){
                sum = sum + arr[i][j];
             }
         }
     } 
     return sum;

  }

  int main(){

   vector<vector<int>>arr(3,vector<int>(3.0));
   int RowSize = arr.size();
   int colsize = arr[0].size();
   
   cout<<"ENTER ROW AND COLUMNS : "<<endl;
   for(int i=0; i<RowSize; i++){
     for(int j=0; j<colsize; j++){
        cin>>arr[i][j];
     }
   }

   cout<<"PRINTED ARRAY "<<endl;
   for(int i=0; i<RowSize; i++){
      for(int j=0; j<colsize; j++){
         cout<<arr[i][j]<<" ";
      }
      cout<<endl;
   }

//    int sum = RowSum(arr);
//    cout<<"Row Sum Are : "<<sum;
   
//    int sum = ColSum(arr);
//    cout<<"Col Sum Are : "<<sum;
   
      int sum = DiagonalSum(arr);
      cout<<"diagonal Sum Are : "<<sum;

    return 0;
  }