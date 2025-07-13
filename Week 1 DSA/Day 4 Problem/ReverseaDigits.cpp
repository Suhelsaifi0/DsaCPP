#include<iostream> 
using namespace std;
  int main(){

    int num ;
    cout<<"ENTER NUMBER : ";
    cin>>num;
    
    int reverse = 0;
    
    while(num != 0){
        int digits = num % 10;
        reverse = reverse*10 + digits; 
        num = num/10;
    }
    
    cout<<"REVERSE DIGITS: "<<reverse;
    
    return 0;
  }