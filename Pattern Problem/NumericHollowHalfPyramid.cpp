#include<iostream>
using namespace std;

  void NumericHollow(int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            if(i==0 || i==n-1 || i==j || j==0 || j==n-1){
                cout<<j+1;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
  }

 int main(){

     int n;
     cout<<"Enter Number Here : ";
     cin>>n;

     NumericHollow(n);

     return 0;
 }