#include<iostream>
#include<vector>
 using namespace std;

   void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
 }

  void selectionSort(vector<int> &v){
       int n = v.size();

       for(int i=0; i<n-1; i++){
         int minIndex = i; // ith Element Hi Smallest Element hai To Compare Kro
            for( int j=i+1; j<n; j++){
                if(v[j] < v[minIndex]){
                   minIndex = j;
                }
            }
                swap(v[i] , v[minIndex]);
       }
  }

  int main(){

   vector<int> v = {33,44,55,11,22};

   selectionSort(v);
   print(v);

    return 0;
  }