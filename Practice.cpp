#include<iostream>
#include<vector> 
using namespace std;

  void print(vector<int> v){
      int size = v.size();
      cout<<"PRINT ARRAY : ";
      for(int i=0; i<size; i++){
          cout<<v[i]<<" ";
      }
  }

  int main(){

   vector<int> v;

   int n;
   cout<<"ENTER NUMBER :";
   cin>>n;

   cout<<"ENTER ARRAY : ";
   for(int i=0; i<n; i++){
    int d;
    cin>>d;
    v.push_back(d);
   }

      for(int i=0; i<4; i++){
      v.push_back(50);
   }

   print(v);
   
   

    return 0;
  }