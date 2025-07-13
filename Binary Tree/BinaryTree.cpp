#include<iostream>
#include<queue>
 using namespace std;

  class Node{
    
    public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }

  };

  Node* createTree(){

    int data;
    cout<<"Enter the Value For Node : "<<endl;
    cin>>data;
    
    // Base Case
    if(data == -1){
      return NULL;
    }

    // Create NewNode
    Node* newNode = new Node(data);

    // Create Left Subtree
    cout<<"Left Of Node: "<< newNode->data << endl;
    newNode->left = createTree();

    // Create Right Subtree
    cout<<"Right Of Node: "<< newNode->data << endl;
    newNode->right = createTree();

    return newNode;
  }

  // PREORDER TRAVERSAL
  void preOrderTraversal(Node* root){
    
    // Base Case
    if(root == NULL){
      return;
    }

    // N L R 
    // N
    cout<< root->data << " ";
    // L
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);
  } 

  // INORDER TRAVERSAL
  void inOrderTraversal(Node* root){
    
    // Base Case
    if(root == NULL){
      return;
    }

    // L N R 
    // L
    inOrderTraversal(root->left);
    // N
    cout<< root->data << " ";
    // R
    inOrderTraversal(root->right);
  }
  
  // POSTORDER TRAVERSAL
  void postOrderTraversal(Node* root){
    
    // Base Case
    if(root == NULL){
      return;
    }

    // L R N 
    // L
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    // N
    cout<< root->data << " ";
  }

  // Level Order Traversal
  void levelOrderTraversal(Node* root){

     queue<Node*> q;
     q.push(root);
     q.push(NULL);

    while(q.size() > 1){ // Yaha Par Galti Ho Gayi Thi Infinte Loop ME Fass Gaya Tha -> Galti Thi !q.empty()
    Node* front = q.front();
     q.pop();
      
     if(front == NULL){
       cout<<endl;
       q.push(NULL); 
     }
     
     else{
      // Valid Node Vala Case
     cout<<front->data<<" ";
    
     if(front->left != NULL){
       q.push(front->left);
      }
      if(front->right != NULL){
        q.push(front->right);
      }
     }
    }
  }

  int main(){

    Node* root = createTree();
   // cout<<root->data<<endl;

   cout<<"Printing PreOrder: ";
   preOrderTraversal(root);
   cout<<endl;

   cout<<"Printing inOrder: ";
   inOrderTraversal(root);
   cout<<endl;

   cout<<"Printing PostOrder: ";
   postOrderTraversal(root); 
   cout<<endl;

   cout<<"level Order: ";
   levelOrderTraversal(root);
   cout<<endl;

    return 0;
  }