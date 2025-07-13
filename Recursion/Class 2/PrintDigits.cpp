#include<iostream>
 using namespace std;
  
  void PrintDigits(int n){

     // Base Case
     if(n == 0){
        return;
     }

     // Recursive Call 
     //Baki Recursion Sambal Lega
      int ans = n/10;
      PrintDigits(ans);
     
     // 1 Case me solve kaunga
     int digits = n%10;
     cout<<digits<<" ";
     
    
    }
  
  int main(){

   int n = 2135567;
   PrintDigits(n);

    return 0;
  }