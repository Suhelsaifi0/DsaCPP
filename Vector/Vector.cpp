#include<iostream>
#include<vector> 
 using namespace std;

  void Print(vector<int>v){
    int Size = v.size();
    cout<<"Print Vector Are : "<<endl;
    // Print Vector
     for(int i=0; i<Size; i++){
        cout<<v[i]<<" "<<endl; 
    }
  }


  int main(){

   vector<int> v;
   
   // while(1){
   // int d;
   // cin>>d;

   // v.push_back(d);
   // cout<<"Capacity :"<<v.capacity()<<" "<<"Size :"<<v.size()<<endl;
   // }

   // Insert Element
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);

//    // delete Element
//     v.pop_back();


   // Take Input From User

   int n;
   cin>>n;
   for(int i=0; i<n; i++){
     int d;
     cin>>d;
     v.push_back(d);
   }
   
   Print(v);
   // Add More Element in Vector Push In our Side in Vector 
   for(int i=0; i<10; i++){
      v.push_back(80);
   }
   
   // v.clear();
   // v.push_back(50);
    Print(v);

   return 0;

  }