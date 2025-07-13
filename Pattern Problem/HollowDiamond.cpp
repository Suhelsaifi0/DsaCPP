#include<iostream>
using namespace std;

  void HollowPyramid(int n){
      
      for(int row=0; row<n; row++){
         for(int col=0; col<n-row-1; col++)
         cout<<" ";

         for(int col=0; col<row+1; col++){
            if(row==0 /*|| row==n-1 */ || col==0 || row==col)
            cout<<"* ";
            else{
                cout<<"  ";
            }
         }
         cout<<endl;
      }
  }

  
  void InvertedHollowHalfPyramid(int n){

    for(int row=0; row<n; row++){
   
      // Print Space
        for(int col=0; col<row+1; col++)
         cout<<" ";
      
      // Print Star
        for(int col=0; col<n-row; col++)
           if(/*row==0 || */ row==n-1 || col==0 || col==n-row-1)
           cout<<"* ";
  
           else{
            cout<<"  ";
           }

         cout<<endl;
    }
  }

  void HollowDiamond(int n){
    HollowPyramid(n);
    InvertedHollowHalfPyramid(n);
  } 

 int main(){

   
   int n;
   cout<<"Enter Number Here :"<<endl;
   cin>>n;

   HollowDiamond(n);

    return 0;
 }