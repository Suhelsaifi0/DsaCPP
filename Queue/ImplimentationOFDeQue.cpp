#include<iostream>
 using namespace std;
  
  class deque{

   public:

   int *arr;
   int size;
   int front;
   int rear;

   deque(int size){
    arr = new int[size];
    this->size = size;
    front = -1;
    rear = -1;
   }

   void push_back(int value){
       
       // OverFlow Condition
       // Element Case -> First Element
       // Circular Case
       // Normal Case
     if((front == 0 && rear == size-1) || (rear == front - 1)){
        cout<<"Stack OverFlow"<<endl;
       }
       else if(front == -1 && rear == -1){
         front++;
         rear++;
         arr[rear] = value;
       }

       else if(rear == size-1 && front != 0){
        rear = 0;
        arr[rear] = value;
       }

       else{
        rear++;
        arr[rear] = value;
       } 
    }

   void push_front(int value){
     // OverFlow
     // Empty
     // Normal Case
     
     if(front == 0){
        cout<<"Stack OverFlow"<<endl;
     }
     else if(front = -1 && rear == -1){
        front++;
        rear++;
        arr[front] = value;
     }

     else{
        front--;
        arr[front] = value;
     }

   }

   void pop_front(){
     
     if(front == -1 && rear == -1){
         cout<<"UnderFlow Stack"<<endl;
      }
      else if(front == rear){
        arr[front] = -1;
        front = -1;
        rear = -1;
      }
      else{
        arr[front] = -1;
        front++;
      }
   }

   void pop_back(){

    //UnderFlow
    //Single Element
    // Normal Flow
    if(front == -1 && rear == -1){
         cout<<"UnderFlow Stack"<<endl;
      }
      else if(front == rear){
        arr[front] = -1;
        front = -1;
        rear = -1;
      }
      else{
        arr[rear] = -1;
        rear--;
      }
   }

};

  int main(){


    return 0;
  }