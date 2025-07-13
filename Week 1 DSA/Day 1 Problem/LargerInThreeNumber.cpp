#include<iostream>
using namespace std;
 int main(){


    int a , b , c ;
    cin>>a>>b>>c;

    if(a>b){
        cout<<"A is Greater";
    }
    else if(b>c){
        cout<<"B is Greater";
    }
     else if(c>a){
        cout<<"C is Greater";
    }
    else{
        cout<<"Everything is fine";
    } 
   
    return 0; 
}