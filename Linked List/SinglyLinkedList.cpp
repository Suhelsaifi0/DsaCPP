#include<iostream>
#include<list>
 using namespace std;
  
  class Node{

   public:
   int data;
   Node* next; 
    
   // Constructor

   Node(int value){
     this->data = value;
     this->next = NULL;
   }

 };

 // InsertAthead
 Node* insertAtHead(int value, Node* &head, Node* &tail){
   
   // LL is empty -> head and tails both Null Ko point krre honge
   // It means we are creating First Node of LL
     if(head == NULL && tail == NULL){
      // Step 1:  Create a New Node 
      Node* newNode = new Node(value);
      // Step 2: Head ko Node Par Lagado 
      head = newNode;
      // Step 3: Tails Ko New Node Par Lagado   
      tail = newNode;   
    }
    else{
        // LL is Not Empty
        // Pehle se Node Present hai
        // insert at head
        // Step 1: Create Node
        Node* newNode = new Node(value);
        // Step 2: Connect This NewNode To head Node
        newNode->next =  head;
        // Step 3: Head Update Karo
        head = newNode;  
    }   
    return head;
};

  // InsertAtTail 
  Node* insertAtTail(int value, Node* &head, Node* &tail){
    
    if(head == NULL && tail == NULL){
    // LL is Empty
    // Iska matlab abhi hum First node create karne ja raha hai LL ki
    // Step: Create Node , Head on that Node , Tail on that Node 
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode; 
    }

    else{
    // LL is Not Empty   
    // Step1: Create Node
    Node* newNode = new Node(value);
    // Step2: Tail Node ko New Node Se Connect karo
    tail->next = newNode;
    // Step3: tail Update
    tail = newNode;
  }
  return head;
}

   // Print Linked List ->
    void print(Node* head){
    Node* temp = head;
    // Jab tak mera Temp Null ke Equal Nahi ahai tab tak Node Print karte raho
    while(temp != NULL){
        cout<< temp -> data <<"->";
        temp = temp -> next;    
      }
      cout<<endl; 
  }

    // We access a Length of Linked List 
    int getlength(Node* head){
      int length = 0;
      Node* temp = head;

      while(temp !=  NULL){
        temp = temp -> next;
        length++;
      }
      return length;
    }

    // InsertAtPosition
    void insertAtPosition(int position , int value, Node* &head, Node* tail){
    // Assume -> Vaild Position Input
    int length = getlength(head);
    if(position == 1){
     // Insert at head karna caha tahu
      insertAtHead(value, head, tail);
    }
    else if(position == length+1){
     // Insert at tail karna caha tahu
     insertAtTail(value, head, tail);
    }
    else{
     // Insert between karna chahata hu
     // Teen Step issme honge 
     // Step 1: New Node Create kare
     // Step 2: Head ke Uppar Temp laga diya
     // Step 3: jiss Position par add Karna usse phele Temp lekar Ke ayee  
     Node* temp = head;
     for(int i=0; i<position-2; i++){
       temp = temp -> next;
     }
     Node* newNode = new Node(value);
     newNode -> next = temp -> next;
     temp->next = newNode;
    }
  }

 // Searching Target
  bool searchLL(int target, Node* head){
    Node* temp = head;
    while(temp != NULL){
      if(temp->data == target){
        return true;
      }
      temp = temp->next;
    }  
    return false;
  }

  // Deletion Of Node
  void DeletionofNode(int position, Node* &head, Node* & tail){
  // If LL is Empty , Then We can not delete
   if(head == NULL && tail == NULL){
    return;
   }

   // Single Node IN LL
   if(head == tail){
    Node* temp = head;
    head = NULL;
    tail = NULL;
    delete temp;
   }
   else{
    // Multiple Node Inside LL
    // Case 2
    // First Case:1-> Position = 1 Ko Delete karna Chate hai
    if(position == 1){
    Node* temp = head;
    head = temp->next;
    temp->next = NULL;
    delete temp;
   }
   else{
    // Any Other Node Except the First One
    Node* prev = head;
    for(int i=0; i<position-2; i++){
       prev = prev -> next;
    }
    Node* curr = prev -> next;
    Node* forward = curr -> next;
    prev -> next = forward;
    curr->next = NULL;
    delete curr;
    }
   }
  }

  int main(){
  
   // Stack
   //Node First;
  
  // Dynamic Memory
  // Node* First = new Node(10);

   Node* head = NULL;
   Node* tail = NULL;

   // LL is Empty
   head = insertAtTail(210, head, tail);
   print(head);

   head = insertAtTail(310, head, tail);
   //print(head);
   
   head = insertAtTail(410, head, tail);
   //print(head);

  // Insert At Position
  insertAtPosition(1, 40, head, tail);
  //print(head);

  insertAtPosition(3, 100, head, tail);
  print(head);

  DeletionofNode(1, head, tail);
  print(head);

  //cout<<searchLL(2100,head);

//    Node* head = NULL;
//    Node* tails = NULL;

//    // LL is Empty 
//    head = insertAtHead(10, head, tails);
//    print(head);
//    // 10-> NULL

//    head = insertAtHead(20, head, tails);
//    print(head);
//    //20->10-> NULL
    
//    head = insertAtHead(30, head, tails);
//    print(head);
//    //30->20->10 Null

    return 0;
  }