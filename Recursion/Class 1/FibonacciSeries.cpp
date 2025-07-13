#include<iostream>
 using namespace std;

  int fiboSeries(int n){

    //Base Case
    if(n == 0 || n == 1){
        return n;
    }

    //Recursive Call
    int ans = fiboSeries(n-1) + fiboSeries(n-2);
    return ans;
  }

  int main(){
 
  int n;
  cout<<"ENTER NUMBER : ";
  cin>>n;
  cout<<fiboSeries(n);

    return 0;
  }