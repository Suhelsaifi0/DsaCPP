#include<iostream>
#include<stack>
 using namespace std;
  int main(){

  stack<char> s;
  string name = "SUHELSAIFI";

  //Insertion Of Character Into The Stack 
  for(int i = 0; i<name.length(); i++){
    char ch = name[i];
    s.push(ch); 
  }

  // Retrivel of Characters From the Stack

  while(!s.empty()){
    cout<<s.top();
    s.pop() ;
  }

    return 0;
  }