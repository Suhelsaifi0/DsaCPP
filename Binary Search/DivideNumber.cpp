#include<iostream>
 using namespace std;

  int getQuotient(int dividend, int divisor){
      int s = -dividend;
      int e = dividend;
      int mid = s + ((e-s)>>1);
      int ans = -1;

      while(s <= e){
         if((divisor*mid) == dividend){
            return mid;
         }
         else if((divisor*mid) < dividend){
            ans = mid;
            s = mid + 1;
         }
         else{
            e = mid - 1;
         }
         mid = s + ((e-s)>>1);
      }
      return ans;
  }

  int main(){

  int dividend;
  cout<<"ENTER DIVIDEND : "<<endl;
  cin>>dividend;
  int divisor;
  cout<<"ENTER DIVISOR : "<<endl;
  cin>>divisor;
  
  int ans = getQuotient(abs(dividend), abs(divisor));
  if((dividend>0 && divisor<0) || (dividend<0 && divisor>0)){
    ans = 0-ans;
  }
  cout<<"Final Answer : "<<ans<<endl;

    return 0;
  }