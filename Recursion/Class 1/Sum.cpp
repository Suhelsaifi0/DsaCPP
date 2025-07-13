#include<iostream>
 using namespace std;

  int getSum(int n){

    //Base Case
    if(n == 0 || n == 1){
        return n;
    }

    //Recursive Call
    int ans =   getSum(n-1) + n;
    return ans;
  }

  int main(){
 
  int n;
  cout<<"ENTER NUMBER HERE : "<<endl;
  cin>>n;
  cout<<getSum(n);

    return 0;
  }