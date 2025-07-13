#include<iostream>
 using namespace std;

  float KiloMeter(int n){
    float KM = 0.621371;
      KM = KM*n; 
      
       return KM; 
    
    }

  int main(){

   int n;
   cout<<"Enter KM To Convert : "<<endl;
   cin>>n;

    float Km = KiloMeter(n);
    cout<<Km;

    return 0;
  }