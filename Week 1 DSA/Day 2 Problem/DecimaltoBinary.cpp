#include<iostream>
#include<math.h>
using namespace std;
 int main()
 {

   int num;
   cout<<"ENTER DECIMAL NUMBER HERE : ";
   cin>>num;

   int ans = 0;
   int i = 0;
   
   while(num!=0){
   int bit = num&1;
   ans = (bit*pow(10,i))+ ans;

   num = num>>1;
   i++;
   }

   cout<<"Answer:"<<ans<<endl; 

    return 0;
 }

