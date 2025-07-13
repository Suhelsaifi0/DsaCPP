#include<iostream>
 using namespace std;
  
  void printCounting(int n){
     // Base Case
    if(n == 0){
        return ;
    }
    // Recursive Call
    cout<<n<<" ";
    printCounting(n-1);
   }
  
  int main(){

  int n;
  cout<<"ENTER NUMBER HERE : "<<endl;
  cin>>n;
  
  printCounting(n);


    return 0;
}