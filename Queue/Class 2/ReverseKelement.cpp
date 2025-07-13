#include<iostream>
#include<stack>
#include<queue>
 using namespace std;
  
  void reverseKelement(queue<int>& q, int k){
    stack<int> s;
    int n = q.size();

    // Sabse Phele Hamare K Element Ko Stack Me Dalna Hai
    
    if(k > n || k == 0){
        return ;
    }
    
    for(int i=0; i<k; i++){
        int element = q.front();
        q.pop();
        s.push(element);
    }
  
    // jO bhi Stack me K me value Ayi Hai Usee hame bacchi hui Queue me Laga dege
    while(!s.empty()){
    int temp = s.top();
    s.pop();
    q.push(temp);
}

    // Push or Pop Karna Hai (n - k) ko in the Queue
    for(int i=0; i<(n-k); i++){
         int temp = q.front();
         q.pop();
         q.push(temp);
    } 

  }

  int main(){

   queue<int> q;

   q.push(10);
   q.push(20);
   q.push(30);
   q.push(40);
   q.push(50); 
 
   reverseKelement(q, 3);
   
   cout<<"Printing K Element "<<endl;
   while(!q.empty()){
   int element = q.front();
   q.pop(); 
   cout<<element<<" ";
   }

    return 0;
  }