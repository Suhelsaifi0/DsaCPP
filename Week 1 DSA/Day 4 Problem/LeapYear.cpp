#include<iostream>
using namespace std;
 int main(){

    int year;
    cout<<"Enter a year"<<endl;
    cin>>year;

    if( year%4 == 0){
        cout<<"Leap Year"<<endl;
    }

    else{
        cout<<"Not Leap Year"<<endl;
    }

    return 0 ;
 }