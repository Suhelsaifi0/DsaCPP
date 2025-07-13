#include<iostream>
using namespace std;
 int main(){

   int n;
   cout<<"Enter number Here : "<<endl;
   cin>>n;

   int count = 0;
   
   for(int row=0; row<n; row++){
    for(int col=0; col<row+1; col++){
        cout<<count+1<<" ";
        count++;
    }
    cout<<endl;
   }

    return 0;
 }