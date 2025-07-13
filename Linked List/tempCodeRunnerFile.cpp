
  void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
    cout<<temp -> data<<"->";
    temp = temp -> Next;
  }
  cout<<"NULL"<<endl;
}