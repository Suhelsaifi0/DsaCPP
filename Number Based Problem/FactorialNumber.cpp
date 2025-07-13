#include<iostream>
 using namespace std;
  
  int Factorial(int n){
     
     int Facto = 1;
      for(int i=1; i<=n; i++){
        Facto = Facto*i;
      }
      return Facto;
  }
  
  int main(){

   int n;
   cout<<"Enter Number Here : "<<endl;
   cin>>n;

   int ans = Factorial(n);
   cout<<"Factorail Of Number is : "<<ans<<" ";

    return 0;
  }