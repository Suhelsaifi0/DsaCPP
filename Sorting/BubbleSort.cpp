#include<iostream>
#include<vector>
 using namespace std;

 void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
 }

 void bubbleSort(vector<int> &v){
      
      int n = v.size();
      for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(v[j] > v[j+1]){   // Increasing Order
            swap(v[j], v[j+1]);
            }
         }
      }
 }

  // For Decreasing Order
  // if(v[j] < v[j+1])

  int main(){

    vector<int> v = {2,6,7,1,5,8,9,5,2,5};
    
    bubbleSort(v);
    print(v);


     return 0;
  }