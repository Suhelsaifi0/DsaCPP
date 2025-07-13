#include<iostream>
using namespace std;
 int main(){

  int num;
  cin>>num;

  int a = 0;
  int b = 1;

  for( int i=1; i<=num; i++){
     
     int NextNumber = a+b;
     cout<<NextNumber<<" ";

     a = b;
     b = NextNumber;
  }

    return 0;
 }