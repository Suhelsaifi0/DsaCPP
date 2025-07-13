#include<iostream>
 using namespace std;

  int main(){

   int a,b;
   cout<<"Enter Value Of A"<<endl;
   cin>>a;
   cout<<"Enter Value Of B"<<endl;
   cin>>b;
   

   int temp;

   temp = a;
   a = b;
   b = temp;
   
   cout<<"Value Of A  : "<<a<<" "<<endl;
   cout<<"Value of B : "<<b<<" "<<endl;
   
    return 0;
  }