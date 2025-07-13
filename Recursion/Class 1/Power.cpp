#include<iostream>
 using namespace std;
  
  int Power(int n){

  // Base Case
    if(n == 0){
        return 1;
    }
  
  // Recursive Call
  int recKaAns = Power(n-1);
  int finalAns = 2 * recKaAns;
  return finalAns;

  // Processing
  // Additional  
}
  
   int main(){

  int n;
  cout<<"ENTER NUMBER HERE : "<<endl;
  cin>>n;
  
  int ans = Power(n);
  cout<<"POWER OF NUMBER IS : "<<ans;
 
  return 0;
  }