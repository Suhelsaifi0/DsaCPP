#include<iostream>
 using namespace std;

  void Digits(int n){
     while(n>0){
        int digits= n%10;
        cout<<"Digits Are : "<<digits<<endl;
        n = n/10;
     }
  }

  int main(){

   int n;
   cout<<"Enter Number Here : "<<endl;
   cin>>n;

   Digits(n);

    return 0;
  }