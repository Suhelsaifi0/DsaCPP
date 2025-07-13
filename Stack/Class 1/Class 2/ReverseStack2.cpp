#include<iostream>
#include<stack>
 using namespace std;
  
  void insertAtBottom(stack<int> &s, int value){
  // Base Case
  if(s.empty()){
    s.push(value);
    return ;
  }
  // 1 Case Mein Sambalunga Baaki Recursion
  int topElement = s.top();
  s.pop();

  // Recursion
  insertAtBottom(s, value);
  
  // BACKTrack
  s.push(topElement); 

  }

  // Reverse Ka Logic
  void reverseStack(stack<int> &s){
  // Base Case
  if(s.empty()){
    return ;
  }

  // 1 CASE MERE HOGA BAKI RECURSION SAMBAL LEGA
  int topElem = s.top();
  s.pop();

  reverseStack(s);
  insertAtBottom(s, topElem);

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

  reverseStack(s);
  print(s);

    return 0;
  }