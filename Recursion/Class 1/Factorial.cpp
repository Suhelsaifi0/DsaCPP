#include<iostream>
 using namespace std;
  
  int findFactorail(int n){

    // Base Case Rukna Khaha Par Hai
    if(n==0){
        return 1;
    }

    // Recursive Phase Function Call

    int recusrionkaAns = findFactorail(n-1);
    int finalAns = n * recusrionkaAns;
    return finalAns;

    // Processing 
    // Optinal 
  }
  
  int main(){

  int n;
  cout<<"ENTER NUMBER HERE : "<<endl;
  cin>>n;
  
  int ans = findFactorail(n);
  cout<<"FACTORAL OF NUMBER ARE : "<<ans;

  return 0;   
 }