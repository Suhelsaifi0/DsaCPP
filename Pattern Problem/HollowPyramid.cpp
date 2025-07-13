#include<iostream>
using namespace std;


  void HollowPyramid(int n){
      
      for(int row=0; row<n; row++){
         for(int col=0; col<n-row-1; col++)
         cout<<" ";

         for(int col=0; col<row+1; col++){
            if(row==0 || row==n-1 || col==0 || row==col)
            cout<<"* ";
            else{
                cout<<"  ";
            }
         }
         cout<<endl;
      }

  }

 int main(){

   
   int n;
   cout<<"Enter Number Here :"<<endl;
   cin>>n;

   HollowPyramid(n);

    return 0;
 }