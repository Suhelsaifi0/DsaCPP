#include<iostream>
#include<stack>
#include<queue>
 using namespace std;
 
  void interLeave(queue<int>& first){
     queue<int> second; 
     
     // Push First Half of first Queue in second Queue
     int size = first.size();
     for(int i=0; i<size/2; i++){
        int temp = first.front();
        first.pop();
        second.push(temp);
     }

    // Merge Both The Halve -> Into the original queue
    for(int i=0; i<size/2; i++){
        int temp = second.front();
        second.pop();
        first.push(temp);

        temp = first.front();
        first.pop();
        first.push(temp);

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
   q.push(80); 

   interLeave(q);
   
   cout<<"Printing K Element "<<endl;
   while(!q.empty()){
   int element = q.front();
   q.pop(); 
   cout<<element<<" ";
   }
 

    return 0;
  }