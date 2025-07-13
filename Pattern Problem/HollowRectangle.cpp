#include<iostream>
using namespace std;
 int main(){

   int row , col;
   cout<<"Enter Row :";
   cin>>row;

   cout<<"Enter Col : ";
   cin>>col;

   for(int i=1; i<row; i++){

     for(int j=1; j<col; j++){
        if(i==1 || i==row-1){
            cout<<"* ";
        }
        else{
            if(j==1 || j==col-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
     }
     cout<<endl;
   }
    return 0;
 }