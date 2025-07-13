#include<iostream>
using namespace std;
 int main(){

    int num1, num2, lcm;
    cout<<"ENTER NUM1 : ";
    cin>>num1;
    cout<<"ENTER NUM2 : ";
    cin>>num2;

   for( lcm = 1; lcm<=num1*num2; lcm++ ){
       if(lcm%num1 == 0 && lcm%num2==0){
             break;
       }
   }
   cout<<"LCM is : "<<lcm;

    return 0;
 }