#include<iostream>
using namespace std;

 class queue{
  
  public:

  int *arr;
  int size;
  int front;
  int rear;

  // Constructor
  queue(int size){
     arr = new int[size];
     this->size = size;
     front = -1;
     rear = -1; 
   }
        
    void push(int value){
    // Queue Full
    if(rear == size - 1){
     cout<<"Queue OverFull"<<endl;
    }
        
    else if(front == -1 && rear == -1){
        // Empty Case
        front++;
        rear++;
        arr[rear] = value;
    }

    else{ // Not Full -> Normal Case
        rear++;
        arr[rear] = value;
      }
   }

   void pop(){
    // UndeFLow
    if(front == -1 && rear == -1){
        cout<<"Underflow"<<endl;
     }
     else if(front == rear){
        // Empty Case -> Single Element
        arr[front] = -1;
        front = -1;
        rear = -1;      
     }
     else{
        // Normal Case
        arr[front] = -1;
        front++;
     }
   }

   bool isEmpty(){
     if(front == -1 && rear == -1){
        cout<<"Queue is Empty"<<endl;
     }
     else{
        cout<<"Queue is Not Empty"<<endl;
     }
   }

   int getSize(){
      // Bhul Jata Hu
      if(front == -1 && rear == -1){
        return 0;
      }
      else{
        return rear - front + 1;
      }
   }

   int getFront(){
    if(front == -1){
      cout<<"No Element in the Queue "<<endl;
        return -1;
    }
    else{
        return arr[front]; 
     }
   }

   int getRear(){
     if(rear == size){
        cout<<"Queue is Full"<<endl;
        return -1;
     }
     else {
        return arr[rear];
     }
   }

   void print(){
    cout<<"PRINTED QUEUE"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
   }

 }; 

 int main(){

  queue q(5);
  q.push(10);
  q.print();
  q.push(20);
  q.print();
  q.push(30);
  q.print();
  q.push(40);
  q.print();
  q.push(50);
  q.print();

  q.pop();
  q.print();
  
  q.push(100);
  q.print();

  cout<<q.getFront()<<endl;
  cout<<q.getRear()<<endl;
  cout<<q.getSize()<<endl;
  cout<<q.isEmpty()<<endl;

    return 0;
 }