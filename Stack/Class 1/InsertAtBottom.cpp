#include<iostream>
#include<stack> 
 using namespace std;
  
  void insertAtBottom(stack<int> &s, int value){

  // BASE CASE
  while(s.empty()){ // JAB EMPTY HO JAYE USME VALUE DAL TO  
    // Insert Value
    s.push(value); 
    return;  
  }

  // 1 Case Me Solve Karunga
  int topElement = s.top(); 
  s.pop();
  
  // Baaki Recursion Sambal Lega
  insertAtBottom(s, value);

  // BackTrack
  s.push(topElement);

  }
  
  int main(){

  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);

  int value = 13;
     
  insertAtBottom(s, value);

  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
  cout<<endl;

    return 0;
  }