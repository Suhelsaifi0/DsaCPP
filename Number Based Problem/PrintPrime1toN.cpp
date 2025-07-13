#include<iostream> 
 using namespace std;
  
  bool Prime(int num){
     for(int i=2; i<num; i++){
        if(num%i==0){
           return false;
        }
     }
     return true;
  }
  
  
  int main(){

    int num;
    cout<<"Enter Number Here : "<<endl;
    cin>>num;

    for(int i=1; i<=num; i++){
         bool isprime = Prime(i);
          if(isprime){
            cout<<i<<" ";      
            }
    }


    return 0;
  }