#include<iostream>
#include<stack>
#include<queue>
 using namespace std;

  void reverse(queue<int> &q){
    stack<int> s;

   // queue ke Element ko hame Stack me Dalna Hai
    while(!q.empty()){
      int firstElement = q.front();
      q.pop();
      s.push(firstElement);
    }

    // Ab Hame Stack Me se Element Queue me Insert Karna hai Or Reverse Ho Jaye Ga
    while(!s.empty()){
       int element = s.top();
       s.pop();
       q.push(element);
    }

  }

  int main(){

  queue<int> q;

  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);
  q.push(70);

  reverse(q);

  cout<<"Printing Queue"<<endl;
  while(!q.empty()){
    int element = q.front();
    q.pop();
    cout<<element<<" ";
  }

    return 0;
  }