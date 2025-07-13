#include<iostream> 
 using namespace std;
  
  int SetBits(int n){     
     int count = 0;
     while(n>0){
        int bits = n&1;
          if(bits == 1)
          count++;
          n = n>>1;
     }
     return count;
  } 
  
  
  int main(){

    int n;
    cin>>n;

   int ans = SetBits(n);
   cout<<"Set Are : "<<ans<<" ";  
 
    return 0;
  }