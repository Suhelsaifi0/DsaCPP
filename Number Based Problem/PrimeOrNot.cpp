#include<iostream>
 using namespace std;

  bool PrimeOrNot(int n){
     for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
     }
      return true;
  }

  int main(){

   int n;
   cout<<"Enter Number Here : "<<endl;
   cin>>n;

   bool isprime = PrimeOrNot(n);
   if(isprime){
    cout<<"Prime Number"<<endl;
   }
   else{
    cout<<"Not Prime Number"<<endl;
   }

    return 0;
  }