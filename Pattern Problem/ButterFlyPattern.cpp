#include<iostream>
 using namespace std;
  
  void ButterFly(int n){

     for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++)
            cout<<"* ";
            for(int j=0; j<2*(n-i)-2; j++)
             cout<<"  ";
              for(int j=0; j<i+1; j++)
              cout<<"* ";
              
             cout<<endl;
     } 


     for(int i=0; i<n; i++){
       for(int j=0; j<n-i; j++)
        cout<<"* ";
         for(int j=0; j<2*i; j++)
          cout<<"  ";
          for(int j=0; j<n-i; j++)
          cout<<"* ";
        cout<<endl;
     }
  }
  
  int main(){

    int n;
    cout<<"ENTER NUMBER : ";
    cin>>n;

   ButterFly(n);

    return 0;
  }