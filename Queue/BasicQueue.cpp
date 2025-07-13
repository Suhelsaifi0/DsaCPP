#include<iostream>
#include<queue>
 using namespace std;
  int main(){

  // CREATION QUEUE
  queue<int> q;
  
  // Insertion in Queue
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);

  // Remove 
  // q.pop();

  // Size
  cout<<"SIZE OF QUEUE : "<<q.size()<<endl;
  
  // Check Empty 
  if(q.empty() == true){
    cout<<"Queue is Empty"<<endl;
  }

  else{
    cout<<"Queue is Not Empty"<<endl;
  }

  // Print First Element of Queue
  cout<<"FIRST ELEMENT OF QUEUE : "<<q.front()<<endl;

  // Print Last Element of Queue
  cout<<"LAST ELEMENT OF QUEUE : "<<q.back()<<endl;


    return 0;
  }