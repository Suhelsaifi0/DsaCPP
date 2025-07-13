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

 int main(){
    
    int n;
    cout<<"Enter Number Here : "<<endl;
    cin>>n;

    fullPyramid(n);

    return 0;
 }