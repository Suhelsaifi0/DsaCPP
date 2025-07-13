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
        left = NULL;
        right = NULL;
    }
};

  Node* buildBST(int val, Node* root){
       if(root == NULL){
        root = new Node(val);
        return root;
       }
       else{
        if(val < root->data){
            // leftSubtree
            root->left = buildBST(val, root->left);
        }
        else{
            root->right = buildBST(val, root->right);
         }
       }
       return root;
  }

  // PREORDER TRAVERSAL
  void preOrderTraversal(Node* root){
    // N L R
    if(root == NULL){
        return;
    }

    // N
    cout<<root->data<<" ";
    // L
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);

  }
  
  // INORDER TRAVERSAL
  void inOrderTraversal(Node* root){
    // L N R
    if(root == NULL){
        return;
    }

    // L
    inOrderTraversal(root->left);
    // N
    cout<<root->data<<" ";
    // R
    inOrderTraversal(root->right);
  }
  
  // POSTORDER TRAVERSAL
  void postOrderTraversal(Node* root){
    // L N R
    if(root == NULL){
        return;
    }

    // L
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    // N
    cout<<root->data<<" ";
  }

  // GET MINIMUN Element in Tree
  int GetMin(Node* root){
    if(root == NULL){
        return -1;
    }

    while(root->left != NULL){
        root = root->left;
    }
    // iska Matlab Data Mil Gaya Hai
    return root->data;
  }

  // GET MAXIMUM Element in Tree
  int GetMax(Node* root){
    if(root == NULL){
        return -1;
    }

    while(root->right != NULL){
        root = root->right;
    }
    // iska Matlab Data Mil Gaya Hai
    return root->data;
  }

  // Search  Element in Tree
  bool SearchTarget(Node* root, int target){
       if(root == NULL){
        return false;
       }

       // Target Is Found 
       if(root->data == target){
        return true;
       }

       else{
          // Abb Decide Kar NA Hai Left Jaoo ya Phir Right Jaoo
          if(target < root->data){
            bool leftAns = SearchTarget(root->left, target);
            return leftAns;
          }
          else{
            bool rightAns = SearchTarget(root->right, target);
            return rightAns;
          } 
       }
    return false;
  }

  Node* createTree(){
        cout<<"ENTER THE VALUE FOR NODE"<<endl;
        int val;
        cin>>val;
        Node* root = NULL;

        while(val != -1){
             root = buildBST(val , root);
             cout<<"ENTER THE VALUE FOR NODE"<<endl;
             cin>>val; 
        }
        return root;
  }

  void levelOrderTraversal(Node* root){

    if (root == NULL) {  // Handle the empty tree case
        return;
    }
     queue<Node*> q;
     q.push(root);
     q.push(NULL);

     while(!q.empty()){
        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout<<endl;
             if(!q.empty()){
                q.push(NULL);
             }
        }
        else{
            cout<<front->data<<" ";  
            if(front->left){
               q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
     }
  }
  
  int main(){

   Node* root = createTree();
   
   cout<<"Printing LevelOrder Traversal : "<<endl;
   levelOrderTraversal(root);
   cout<<endl<<"PreOrder Traversal : "<<endl;
   preOrderTraversal(root);
   cout<<endl<<"inOrder Traversal : "<<endl;
   inOrderTraversal(root);
   cout<<endl<<"PostOrder Traversal : "<<endl;
   postOrderTraversal(root);
   cout<<endl<<"GET Minimum Element : "<<GetMin(root)<<endl;
   cout<<endl<<"GET Maximum Element : "<<GetMax(root)<<endl;

   bool isfound = SearchTarget(root, 450);
   if(isfound){
    cout<<"Node is Found"<<endl;
   } 

   else{
    cout<<"Node is Not Found"<<endl;
   }

    return 0;
  }