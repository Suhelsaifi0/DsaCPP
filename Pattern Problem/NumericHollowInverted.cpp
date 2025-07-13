#include<iostream>
using namespace std;

 void numericHollowInverted(int n){
      
    for(int i=0; i<n; i++){
        for(int j=i+1; j<=n; j++){
            if(i==0 || j==n || j==i+1){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
 }

int main(){

    int n;
    cout<<"ENTER NUMBER HERE : ";
    cin>>n;

    numericHollowInverted(n);


    return 0;
}