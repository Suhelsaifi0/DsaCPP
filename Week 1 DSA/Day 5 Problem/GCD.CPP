#include<iostream>
using namespace std;
int main(){

    int num1 , num2;
    cout<<"Enter Num1 : ";
    cin>>num1;
    cout<<"Enter Num2 : ";
    cin>>num2;

    int gcd = 1;

    for(int i=1; i<=num1 && i<=num2; ++i){
        if( num1%i==0 && num2%i==0){
            gcd = i;
        }
    }

    cout<<"GCD of Number is : "<<gcd;

    return 0;
}