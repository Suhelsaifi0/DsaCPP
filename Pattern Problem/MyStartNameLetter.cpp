#include<iostream>
 using namespace std;

  void MyName(int n){
     
     for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(i==0 || i==n-1 || i==n/2 || (j==0 && i<n/2) || (j==n-1 && i >= n/2))
           cout<<"* ";
           else {
            cout<<"  ";
           }
       } 
       cout<<endl;
     }

     cout<<endl;
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(i==n-1 || j==0 || j==n-1 )
           cout<<"* ";
           else {
            cout<<"  ";
           }
       }
       cout<<endl;
     }
    
    cout<<endl;

    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(j==0 || j==n-1 || i==n/2 )
           cout<<"* ";
           else {
            cout<<"  ";
           }
       }
       cout<<endl;
     }

     cout<<endl;

    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(i==0 || i==n-1 || i==n/2 || j==0 )
           cout<<"* ";
           else {
            cout<<"  ";
           }
       }
       cout<<endl;
     }

    cout<<endl;

    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(i==n-1 || j==0)
           cout<<"* ";
           else {
            cout<<"  ";
           }
       }
       cout<<endl;
     }
  }

  int main(){

   int n;
   cout<<"ENTER NUMBER HERE : "<<endl;
   cin>>n;

    MyName(n);

    return 0;
  }