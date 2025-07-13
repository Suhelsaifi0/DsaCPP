#include<iostream>
#include<stack>
 using namespace std;
  int main(){
  
  // Creation 
  stack<int> s;
  
  // Insertion
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  
  // Check Size
  cout<<s.size()<<endl;
  
  // Check Empty or Not
  cout<<s.empty()<<endl;  

  // Peek
  cout<<s.top()<<endl;
  
  // Removal 
  s.pop();

  cout<<s.top()<<endl;  
    return 0;
  }