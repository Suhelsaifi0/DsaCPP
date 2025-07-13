#include<iostream>
 using namespace std;

 class stack{

  public:
   
    int* arr;
    int size;
    int top;

    // Constructor

    stack(int capacity){
        arr = new int[capacity];
        size = capacity;
        top = -1;
    } 

    void push(int val){
       if(top == size- 1){ 
        // Agar Stack pura Bhar gaya To Vo OverFlow Mardega 
        cout<<"Stack OverFlow"<<endl;
       }
       else{
       // Normal Case -> Stack Abhi Pura Khali HAi
         top++;
         arr[top] = val;
       }
    }

    void pop(){
        if(top == -1){
            // Stack Ke andar Kyo element hi Nahi ha POP Karner ke liye
            cout<<"Stack UnderFlow"<<endl;
        }
        else{
            // Normal Case
            arr[top] = -1;
            top--;
        }
    }
    
    int getsize(){
        return top + 1;
    }

    bool isEmpty(){
     if(top == -1){
        return true;
     }
     else{
        return false; 
      }
    }

    int getTop(){
        if(top == -1){
            cout<<"There is Not Element at the top, as Stack is Empty";
            return -1;
        }
        else{
            //Normal Case
            return arr[top];
        }
    }
    
    void print(){
        cout<<"PRINTING STACK"<<endl;
        for(int i=0; i<size; i++){
            cout<< arr[i]<<" ";
        }
        cout<<endl;
    } 
};

  int main(){
  
  // Creating a Stack of initial Size 5
  stack s(5);
  s.print();
  s.push(10);
  s.print();
  s.push(20);
  s.print();
  s.push(30);
  s.print();
  s.push(40);
  s.print();
  s.push(50);
  s.print();
  s.push(60);
  s.print();

  cout<<s.getTop()<<endl;
  cout<<s.getsize()<<endl;
  cout<<s.isEmpty()<<endl;

  s.pop();
  s.print();
  s.pop();
  s.print();
  cout<<s.getsize()<<endl;

    return 0;
  }