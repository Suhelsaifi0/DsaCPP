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

   
   for(int i=1; i<=n; i++){
      cout<<" "<<a;
      a = a + d;
   }

    return 0;
 }