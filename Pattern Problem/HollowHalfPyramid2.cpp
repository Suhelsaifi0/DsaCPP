#include<iostream>
using namespace std;


  void HollowHalfPyramid2(int n){
      
      for(int i=0; i<n; i++){
         for(int j=0; j<n-i; j++){
            cout<<"* ";
         }
         cout<<endl;
      }

  }

 int main(){

   
   int n;
   cout<<"Enter Number Here :";
   cin>>n;

   HollowHalfPyramid2(n);

    return 0;
 }