#include<iostream>
using namespace std;
 int main(){

    int a = 10 , b = 25;

    int temp ;
    temp = a ;
    a = b ;
    b = temp ;

    cout<<"Answer"<<a<<" "<<b;


    return 0;
 }