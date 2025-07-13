#include<iostream> 
 using namespace std;
  
  bool EvenOrOdd(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
  }
  
  int main(){
    
    int n;
    cout<<"Enter Number Here : "<<endl;
    cin>>n;

    bool ans = EvenOrOdd(n);
    if(ans == true){
       cout<<"Even Number"<<endl;
    }

    else{
        cout<<"Odd Number "<<endl;
    }

    return 0;

  }