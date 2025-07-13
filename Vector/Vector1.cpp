#include<iostream>
#include<vector> 
 using namespace std;

  void Print(vector<int>v){
    int Size = v.size();
    cout<<"PRINT VECTOR ARRAY : "<<endl;
    // Print Vector
     for(int i=0; i<Size; i++){
        cout<<v[i]<<" "; 
    }
  }

  int main(){

   vector<int> v;
   
   // Take Input From User
   int n;
   cout<<"ENTER NUMBER : ";
   cin>>n;

   cout<<"ENTER ARRAY : ";
   for(int i=0; i<n; i++){
     int d;
     cin>>d;
     v.push_back(d);
   }

   // We Can Add more Element in Vector if size is complete 
   for(int i=0; i<10; i++){
      v.push_back(50);
   }
   
   Print(v);   
   v.clear();
   v.push_back(30);
   Print(v);   

   return 0;

  }