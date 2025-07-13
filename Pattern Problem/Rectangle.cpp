#include<iostream>
using namespace std;
 int main(){
   
   int lenght , width;
   cout<<"Enter Lenght Here :"<<endl;
   cin>>lenght;

   cout<<"Enter Width Here : "<<endl;
   cin>>width;

   for(int r=0; r<lenght; r++){
       
       for(int c=0; c<width; c++){
        cout<<"* ";
       }
       cout<<endl;
   }

    return 0;
 }