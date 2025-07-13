#include<iostream>
 using namespace std;
  
  class Node{

  public:
  int data;
  Node* prev;
  Node* Next;

   // Parameterised Constructor
   Node(int value){
    data = value;
    prev = NULL;
    Next = NULL;
   }
};
 
  // InsertAtHead
  void insertAtHead(int value, Node* &head, Node* &tail){
   // 2 CASE : LL is Empty / Non - Empty
   // LL is Empty 
   if((head == NULL && tail == NULL)){
   // Iska Matlab LL is Empty I Create 1st Node
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
   }
   else{
    // LL is not Empty
    Node* newNode = new Node(value);
    newNode -> Next = head; 
    head -> prev = newNode;
    head = newNode;
   }
} 

  // InsertAtTail
  void insertAttail(int value, Node* &head, Node* & tail){
  // 2 CASE : LL is Empty / Non - Empty
   // LL is Empty 
   if(head == NULL && tail == NULL){
  // Iska Matlab LL is Empty I Create 1st Node
    Node* newNode = new Node(value);
    head = newNode; // Head Ko New Node Par LagaDiya
    tail = newNode; // tail Ko New Node Par LagaDiya
   }
   else{
    // LL is not Empty
    Node* newNode = new Node(value); // Step:1
    tail -> Next = newNode;  // Step:2
    newNode -> prev = tail;  // Step:3
    tail = newNode;  // Step:4
   }  
 }

  void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
    cout<<temp -> data<<"->";
    temp = temp -> Next;
  }  
  cout<<"NULL"<<endl;
}

  void printReverse(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout<<temp -> data <<"->";
        temp = temp -> prev;
    }
    cout<<"NULL"<<endl;
  }

  // Get Length
  int getLength(Node* head){
   Node* temp = head;
   int count = 0;
   while(temp != NULL){
    count++;
    temp = temp -> Next; 
   } 
   return count;
  }

 // InsertAtPosition
 void insertAtPosition(int position, int value, Node* head, Node* tail){
    int length = getLength(head);
    // 3 Case : 
    //Insert At left Most Position
    if(position == 1){
        insertAtHead(value, head, tail);
    }
    //Insert At Right Most Position 
    else if(position == length+1){
        insertAttail(value, head, tail);
    }
    //InsertAtPosition Middle
    else{  
     Node* temp = head; // Step 1 : - Head Ko Temp Ke Andar Dal Diya
     for(int i=0; i<position-2; i++){
        temp = temp->Next; // Step 2 : - Temp KO Chalana ha 
     }
     // Step 3 : Create NewNode
     Node* newNode = new Node(value);
     // Step 4: Forward Pointer Set Taaki LL Miss Na Ho
     Node* forward = temp->Next;
     // Step 5:  
     temp->Next = newNode; // TEMP KE NEXT KO NewNode me Daldiya
     newNode->prev = temp; // NewNode KE Prev KO Temp me Daldiya 
     newNode->Next = forward; // NewNode KE Next KO Forward me Daldiya
     forward->prev = newNode; // Forward KE prev KO NewNode me Daldiya
    }
 } 

 // Searching in Doubly Linked List
    bool SearchLL(int target, Node* head){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == target){
            return target;
        }
        temp = temp->Next;
    }
    return false;
  }

  // Deletion Of Node
  void deletionOfPosition(int position, Node* head, Node* tail){
  int length = getLength(head);  
  // LL is Empty
  if(head == NULL && tail == NULL){
    cout<<"NO NODE TO DELETE"<<endl;
    return;
   }
   else if (head == tail){
    // Single Node To delete 
    Node* temp = head;
    head = NULL;
    tail = NULL;
    delete temp;
   }
   else if (position == 1){
    // We want to delete head Node
    Node* temp = head;
    head = head -> Next;
    head -> prev = NULL;
    temp->Next = NULL;
    delete temp; 
   }
   else if(length == position){
     // Tail Vali Position ko Delete karna Chata hu
     Node* temp = tail;
     tail = temp->prev;
     tail->Next = NULL;
     temp->prev = NULL;
     delete temp;
   }
   else{
    // We want to delete Any Other Node than head and tail
   Node* backward = head;
   for(int i=0; i<position-2; i++){
     backward = backward -> Next; 
    }
    Node* curr = backward->Next;
    Node* forward = curr->Next;

    // Pointer Change 
    backward -> Next = forward;
    forward -> prev = backward;
    // Curr ko isolate karo
    curr -> prev = NULL;
    curr -> Next = NULL; 
    // Curr Isolate hogaya hai
    delete curr;
   }
  }

  int main(){

   Node* head = NULL;
   Node* tail = NULL;
   
   cout<<"INSERT AT HEAD : "<<endl;
   insertAtHead(10, head, tail);
   insertAtHead(20, head, tail);
   insertAtHead(30, head, tail); 
   print(head);
   
   cout<<"PRINT REVERSE : "<<endl;
   printReverse(tail); 
   
   cout<<"INSERT AT TAIL : "<<endl;
   insertAttail(500, head, tail); 
   insertAttail(600, head, tail);
   print(head);

   cout<<"INSERT AT ANY Position : "<<endl;
   insertAtPosition(5, 200, head, tail);
   print(head);

   cout<<"TARGET is : "<<SearchLL(200, head)<<endl;

   cout<<"AFTER DELETION : "<<endl;
   deletionOfPosition(6 , head , tail);
   print(head);

    return 0;
  }