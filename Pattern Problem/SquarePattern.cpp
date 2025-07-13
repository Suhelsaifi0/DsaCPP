#include<iostream>
using namespace std;
 int main(){

   int lenght , width;
   cout<<"Enter Lenght Here :"<<endl;
   cin>>lenght;

   cout<<"Enter Width Here : "<<endl;
   cin>>width;

   for(int row=0; row<lenght; row++){
       
       for( int col=0; col<width; col++){
        cout<<"* ";
       }
       cout<<endl;
   }

    return 0;
 }