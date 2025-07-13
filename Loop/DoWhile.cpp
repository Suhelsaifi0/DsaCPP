#include<iostream>
using namespace std;
  int main(){

    int n;
    cout<<"ENTER NUMBER HERE : ";
    cin>>n;
    
    int i=1;
    do{
        // Logic
        cout<<i<<" ";
        //Updation
        i++;
    }while(i<=n);
    cout<<endl;

    return 0;
  }