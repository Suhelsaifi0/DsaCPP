#include<iostream>
using namespace std;

   void fullPyramid(int n){

    for(int row=0; row<n; row++){
   
      // Print Space
        for(int col=0; col<n-row-1; col++)
         cout<<" ";
      
      // Print Star
        for(int col=0; col<row+1; col++)
         cout<<"* ";
         cout<<endl;
    }
  }

    void InvertedFullPyramid(int n){

    for(int row=0; row<n; row++){
   
      // Print Space
        for(int col=0; col<row+1; col++)
         cout<<" ";
      
      // Print Star
        for(int col=0; col<n-row; col++)
         cout<<"* ";
         cout<<endl;
    }
  }
  
   void diamond(int n){
    fullPyramid(n);
    InvertedFullPyramid(n);
  }

 int main(){
    
    int n;
    cout<<"ENTER NUMBER : ";
    cin>>n;

    diamond(n);

    return 0;
 }