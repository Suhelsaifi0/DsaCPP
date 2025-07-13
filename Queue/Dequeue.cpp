#include<iostream>
#include<deque>
 using namespace std;
  int main(){

   deque<int> dq;

   dq.push_front(10);
   dq.push_back(20);

   dq.pop_back();

   cout<<dq.front()<<" ";
   cout<<dq.back()<<" ";

   cout<<dq.size()<<" ";

    return 0;
  }