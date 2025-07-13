#include<iostream>
using namespace std;
 int main(){

     int n;
     cout<<"Enter Number Here : ";
     cin>>n;

     for(int row=0; row<n; row++){
        for(int col=1; col<row+1; col++){
            cout<<col;
        }
        cout<<endl;
     }

     return 0;
 }