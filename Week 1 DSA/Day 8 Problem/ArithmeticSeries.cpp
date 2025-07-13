#include<iostream>
using namespace std;
 int main(){

   int a , n , d;
  
   cout<<"Enter First Term : ";
   cin>>a;

   cout<<"Enter Nth Term : ";
   cin>>n;

   cout<<"Enter Difference : ";
   cin>>d;

   int AP = a + (n - 1) * d;
   
   cout<<"AP : "<<AP;

    return 0;
 }