#include<iostream>
using namespace std; 
int main(){

  int n;
  cout<<"Enter a Number"<<endl;
  cin>>n;

  int sum = 0;

  for( int i = 0; i <= n; i++ ){
    sum = sum + i;
  }  

  cout<<"Sum of Digits:"<<sum;

  return 0;

}