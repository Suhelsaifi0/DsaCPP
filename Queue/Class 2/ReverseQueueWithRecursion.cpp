#include<iostream>
#include<stack>
#include<queue>
 using namespace std; 

  void reverse(queue<int> q){
    // Base Case
    if(q.empty()){
        return ;
    }

    int Element = q.front();
    q.pop();

    reverse(q);
    
    q.push(Element);

  }
  
  int main(){

   queue<int> q;

   q.push(10);
   q.push(20);
   q.push(30);
   q.push(40);
   q.push(50);
   q.push(60);

   reverse(q);
   
   cout<<"PRINTED REVERSE QUEUE"<<endl;
    while(!q.empty()){
      int Element = q.front();
      q.pop();
      cout<<Element<<" ";   
   }

    return 0;
}