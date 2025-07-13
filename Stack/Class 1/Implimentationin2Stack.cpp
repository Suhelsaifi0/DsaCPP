#include<iostream>
 using namespace std;
  
  class stack{
 
   public: 

   int* arr;
   int size;
   int top1;
   int top2;

   // Constructor
   stack(int capacity){
     arr = new int[capacity];
     size = capacity;
     top1 = -1;
     top2 = size; // Ye Me BHUL Gaya Tha
   } 

   void push1(int value){
    // If Space available, then Push
    // Else Stack OverFlow Karjaega

    if(top2-top1 == 1){
        // Cannot Insert 
        cout<<"STACK IS FULL"<<endl;
    }
    else{
        top1++;    
        arr[top1] = value; 
     }
   }
      
   void push2(int value){
    if(top2-top1 == 1){ 
        cout<<"STACK IS FULL"<<endl;
    }
    else{
        top2--;    
        arr[top2] = value; 
     }
   }
  
   void pop1(){
   // If Element Available Then POP 
   // If stack empty , then dont POP
   if(top1 == -1){
    // Stack 1 Empty 
    cout<<"Stack UnderFlow"<<endl;
    }
    else{
        arr[top1] = 0;
        top1--;
    }    
   }

   void pop2(){
    if(top2 == size){
        // Stack 2 is Empty , NO element to POP
        cout<<"Stack OverFlow"<<endl;
    }
    else{
        arr[top2] = 0;
        top2++; 
    }
   }

   void print(){
     cout<<"Top1: "<<top1<<endl;
     cout<<"Top2: "<<top2<<endl;
     for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
     } 
     cout<<endl;
   }

  };
  
  int main(){
   
  stack s(5);
  s.push1(10);
  s.print();
  s.push1(20);
  s.print();
  s.push2(30);
  s.print();
  s.push2(10);
  s.print(); 
  s.push1(50);
  s.print();
  s.push2(70);
  s.print();
   
    return 0;
  }