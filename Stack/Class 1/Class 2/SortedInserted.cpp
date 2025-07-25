#include<iostream>
#include<stack>
 using namespace std;
  
  void sortedinsert(stack<int>& s, int value){
      
    // BASE CASE
    if(!s.empty() && s.top() < value){
      s.push(value);
      return;
    }

    // 1 Case Mera
    int topElement = s.top(); 
    s.pop();

    // Baaki Recursion
    sortedinsert(s, value);
    
    // BackTrack
    s.push(topElement);
 }

 void print(stack<int>& s){
    while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
    }
 }
  
  int main(){

  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);
  
  int value = 23;

  sortedinsert(s, value);
  print(s);

    return 0;
  }